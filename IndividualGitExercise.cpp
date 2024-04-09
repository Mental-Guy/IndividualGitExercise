#include <iostream>
#include <string>
#include <ctime>
#include <algorithm>
#include <random> 
using namespace std;

string firstName = "";
string lastName = "";
string command = "";

int firstNameLength;
int lastNameLength;
int counter;

void letterCounter() {
	do {
		cout << firstName << " " << lastName << "\n";
		counter++;
	}
	while (counter < firstName.length() + lastName.length());
}

void letterShuffler(){
	mt19937 mt;
	shuffle(firstName.begin(), firstName.end(), mt);
	shuffle(lastName.begin(), lastName.end(), mt);
	cout << firstName << " " << lastName << "\n";
}

//This is a comment

int main () {
	cout << "Type your first name: ";
	getline (cin, firstName);
	cout << "Type your last name: ";
	getline (cin, lastName);

	firstNameLength == firstName.length();
	lastNameLength == lastName.length();

	cout << "Your name is " << firstName << " " << lastName <<"." <<  "\n";
	cout << "Your name has " << firstName.length() + lastName.length() << " letters." << "\n";
	
	cout << "Type 'counter' to view name multiplied by the length of your name. Type 'shuffler' to shuffle the letters of your name." << "\n";
	getline (cin, command);

	if (command == "counter"){
		letterCounter();
	}
	else if (command == "shuffler") {
		letterShuffler();
	}
		return 0;
}
