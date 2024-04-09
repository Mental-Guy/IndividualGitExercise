#include <iostream>
#include <string>
using namespace std;

string firstName = "";
string lastName = "";

int firstNameLength;
int lastNameLength;

int main () {
	cout << "Type your first name: ";
	getline (cin, firstName);
	cout << "Type your last name: ";
	getline (cin, lastName);

	firstNameLength == firstName.length();
	lastNameLength == lastName.length();

	cout << "Your name is " << firstName << " " << lastName <<"." <<  "\n";
	cout << "Your name has " << firstName.length() + lastName.length() << " letters." << "\n";
		return 0;
}
