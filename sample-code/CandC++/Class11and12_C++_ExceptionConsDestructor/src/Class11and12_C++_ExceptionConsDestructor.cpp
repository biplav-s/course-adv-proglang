//============================================================================
// Name        : Class11and12_C++_ExceptionConsDestructor.cpp
// Author      : Biplav
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;




// Show usage of exceptions
void demoException() {
	cout << "Demo: Exceptions " << endl;
	
	string name = "Tom"; 
	
	int input;
	cout << "Enter an index: ";
	cin >> input;
	
	cout << "\tAccessing i-th index of string naively ... " << name << endl;
	cout << "\tValue = " << name.at(input) << endl;
	
	cout << "Calling again with try-catch " << endl;
	try {
		cout << "\tAccessing (i-th + 2) index of string ... " << name << endl;
		cout << "\tValue = " << name.at(input + 2) << endl;

	}
	catch (exception& e) {
		cout << "\n\t**Error Exception**: string access \n";
		cout << "\t" << e.what() << endl;
	}
}



// MyException example.
// The compiler may need option: -std=c++11 
struct myException : exception {
    const char* what() const noexcept
    {
        return "CSCE 240 class' exception";
    }
};

// A demonstration of one's own exception
void demoMyException() {
	
	cout << "Demo: Our own exception " << endl;
	
	// try block
	try {
		cout << "\tThrowing myException" << endl;
		throw myException();
	}

	// catch block to handle the errors
	catch (exception& e) {
		cout << "\n\t**Error myException**:  \n";
		cout << e.what();
	}

}


// --------
// Main

int main(int argc, char *argv[]) {

	char command = 0;
	string str = "";

	cout << "Examples for Classes 11 and 12\n" << endl; 
	
	// First argument is program name
	cout << "Program name : " << argv[0] << endl;

	if (argc == 1) {
		printf("\nNo command passed. By default, will be demoing inheritance.");
		demoException();

		return 0;
	} else {
		// argc >= 2
		command = *argv[1];

		cout << "Command to run is - " << command << endl;
	}

	// Now execute based on command

	if (command == '0') {
		// Demo exception
		demoException();
	} else if (command == '1') {
		// Demo my exception
		demoMyException();
	} else {
		// For more demos
	}

	return 0;
}

