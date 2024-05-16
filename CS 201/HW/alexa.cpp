//Author: Joseph Charles Serrano
//Filename: alexa.cpp
//Assignment: HW 14

#include <iostream>
#include <cstdlib>

using namespace std;

class Cylinder
{
	private:
		double radius;
		double height;
		double pi;

	public:
		Cylinder() 
		{
			radius = 0.0;
			height = 0.0;
			pi = 3.14159;
		}
		Cylinder(double r, double h) 
		{
			radius = r;
			height = h;
			pi = 3.14159;
		}

		Cylinder(const Cylinder &copy)  // copy constructor
		{
			radius = copy.radius;
			height = copy.height;
			pi = copy.pi;
		}

		Cylinder& operator= (const Cylinder& assign) //overloading assignment
		{
			radius = assign.radius;
			height = assign.height;
			pi = assign.pi;
		}

		void setHeight(double);
		void setRadius(double);
		double getSurfaceArea() const
		{
			return (2 * pi * radius) * (radius + height);
		}
		double getVolume() const
		{
			return (pi * (radius * radius) * height);
		}
		double getRadius() const
		{
			return radius;
		}
		double getHeight() const
		{
			return height;
		}

		bool operator == (const Cylinder& c) // overloading == 
		{
			if (radius == c.radius && height == c.height)
				return true;
			else
				return false;
		}
		bool operator < (const Cylinder& c) // overloading <
		{
			if (getVolume() < c.getVolume())
				return true;
			else
				return false;
		}
		Cylinder operator ++ (int) // overloading postfix ++
		{
			Cylinder t(radius, height);

			radius+=0.1;
			height+=0.1;

			return t;
		}
		friend ostream& operator<< (ostream& out, const Cylinder& c) // overloading <<
		{
			out << c.getVolume();
			return out;
		}

		operator double() // overloading conversion
		{
			return getVolume();
		}
};


void Cylinder::setHeight(double h) {
	if (h >= 0)
		height = h;
	else {
		cout << "Invalid Height\n";
		exit(EXIT_FAILURE);
	}
}
void Cylinder::setRadius(double r) {
	if (r >= 0)
		radius = r;
	else {
		cout << "Invalid radius\n";
		exit(EXIT_FAILURE);
	}
}

int main()
{
	Cylinder c;
	double r, h;

	cout << "Enter the radius and height of a cylinder, separated by a space: ";
	cin >> r >> h;

	c.setRadius(r);
	c.setHeight(h);

	cout << "Surface area of the cylinder: " << c.getSurfaceArea() << "\n";
	cout << "Volume of the cylinder: " << c.getVolume() << "\n";

	cout << "Enter the radius and height of another cylinder: ";
	cin >> r >> h;

	Cylinder d(r, h);

	cout << "Volume of the new cylinder: " << d << "\n";
	if (c == d)
		cout << "Both cylinders have the same volume.\n";
	else
		cout << "The cylinders have a different volume.\n";
	
	if (c < d)
		cout << "The new cylinder has less volume.\n";
	else
		cout << "The new cylinder does not have less volume.\n";
	

	Cylinder e = d;
	cout << "c: " << c << endl;
	cout << "d: " << d << endl;
	cout << "e: " << e++ << endl;

	double f = e;
	cout << "e: " << f << endl;

	
	return 0;
}