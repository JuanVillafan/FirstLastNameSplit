#include <iostream>
#include <string>

using namespace std;

namespace nameSplit {
	//This function will work as if there is only a first and last name, no middle name, and no prefix/suffix names!

	void splitName(string fullName,string& firstName,string& lastName) {	
	//Make sure variables are clear
		firstName.clear();
		lastName.clear();
	//counter will be used for measuring until the space
		int counter=0;
		int nameSize = fullName.length();
		for (int i = 0; i < nameSize;i++) {
			counter++;
			if (isspace(fullName[i]) == false)
				firstName = firstName + fullName[i];
			else
				break;
		}

		for (int i = counter; i < nameSize; i++)
			lastName = lastName + fullName[i];
	}
}
