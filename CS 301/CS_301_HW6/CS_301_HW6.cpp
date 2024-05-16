//CS 301
//Assignment 6
//Group 9

#include <iostream>
#include <string>

using namespace std;

void isPalindrome(string s);

int main() {
	string input;

	while (true) {
		cout << "Enter a string to test: ";
		getline(cin, input);

		isPalindrome(input);
		cout << endl;
		if (input == "")
			break;
	}
	
}

void isPalindrome(string s) {

	bool test = NULL;

	for (int i = 0; i < s.length() / 2; i++) {
		if (s[i] != s[s.length() - i - 1])
			test = false;
		else
			test = true;
	}

	int x = test;
	if (x == 0) {
		cout << "The string " << "'" << s << "'" << " is not a palindrome.\n";
	}
	else {
		cout << "The string " << "'" << s << "'" << " is a palindrome.\n";
	}
	
}


