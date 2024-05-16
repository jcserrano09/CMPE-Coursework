//Author: Joseph Charles Serrano
//Filename: rpg.cpp
//Assignment: HW 15

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class NPC{
	protected:
		string name;
	public:
		NPC()	{name = "placeholder"; }
		NPC(string n)	{ name = n; }
		void setName(string n)	{ name = n; }
		string getName() const	{ return name; }
		virtual void printStats() { cout << "Stats: "; }
};

class Flying : public NPC {
	private:
		int flightspeed;
	public:
		Flying() { flightspeed = 0; setName("Flying"); }
		void setFlightSpeed(int fs) {
			if (fs >= 0)
				flightspeed = fs;
			else {
				cout << "No Flight Speed\n";
				exit(EXIT_FAILURE);
			}
		}
		int getFlightSpeed() const { return flightspeed; }
		void printStats() {
			string flymon = "Flying Monster.";
			cout << "Name: " << getName() << endl;
			cout << "Flight Speed: " << getFlightSpeed() << endl;
			cout << flymon << endl;
		}		
};

class Walking : public NPC {
	private:
		int walkspeed;
	public:
		Walking() { walkspeed = 0; setName("Walking"); }
		void setWalkSpeed(int ws) {
			if (ws >= 0)
				walkspeed = ws;
			else {
				cout << "No walk speed\n";
				exit(EXIT_FAILURE);
			}
		}
		int getWalkSpeed() { return walkspeed; }
		void printStats() {
			string walkmon = "Walking Monster.";
			cout << "Name: " << getName() << endl;
			cout << "Flight Speed: " << getWalkSpeed() << endl;
			cout << walkmon << endl;
		}
};

class Generic : public NPC {
	private:
		int stat;
	public:
		Generic() { stat = 0; setName("Generic"); }
		Generic(string n, int s) { name = n; stat = s; }
		void setStats(int s){
			if (s >= 0)
				stat = s;
			else {
				cout << "NULL\n";
				exit(EXIT_FAILURE);
			}
		}
		int getStats() { return stat; }
		void printStats() {
			string genmon = "Generic Monster.";
			cout << "Name: " << getName() << endl;
			cout << "Generic Stat: " << getStats() << endl;
			cout << genmon << endl;
		}
};


int main() {

	Flying f;
	Walking w;
	Generic g;

	f.setFlightSpeed(3);
	w.setWalkSpeed(10);
	g.setStats(1337);

	NPC* monsters[3] = {&f,&w,&g};

	monsters[0]->setName("Bee");
	monsters[1]->setName("Zombie");
	monsters[2]->setName("Mike Wazowski");

	for (int i = 0; i < 3; i++) {
		monsters[i]->printStats();
	}

}
