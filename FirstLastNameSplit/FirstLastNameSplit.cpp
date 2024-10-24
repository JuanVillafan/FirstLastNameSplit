
#include <iostream>
#include <string>
#include "FirstLast.h"
using namespace std;

int main()
{
	//This program will work as if there is only a first and last name, no middle name, and no prefix/suffix names!

//Using 3 different names as a test, to show the code is not a fluke and works with any length names
	string fullName = "Juan Villafan";//13
	string fullName2 = "Joe Doe";//7
	string fullName3 = "Bartholomew Jamesworth";//22
//Values used to store the first and last name
	string firstName;
	string lastName;
//Tests(view Header file for splitName function)
	nameSplit::splitName(fullName, firstName, lastName);
	cout << "________ Test 1 ___________" << endl << endl;
	cout <<"Your first name is : " << firstName<<endl;
	cout << "Your last name is : " << lastName << endl;
	cout << "______________________________" << endl << endl;


	nameSplit::splitName(fullName2, firstName, lastName);
	cout << "________ Test 2 ___________" << endl << endl;
	cout << "Your first name is : " << firstName << endl;
	cout << "Your last name is : " << lastName << endl;
	cout << "______________________________" << endl << endl;

	nameSplit::splitName(fullName3, firstName, lastName);
	cout << "________ Test 3 ___________" << endl << endl;
	cout << "Your first name is : " << firstName << endl;
	cout << "Your last name is : " << lastName << endl;
	cout << "______________________________" << endl << endl;
}

