//============================================================================
// Name        : Class5and6_C++_MemoryUserDefined.cpp
// Author      : Biplav
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

#include "PersonClassDemo.h"
using namespace std;

// A declaration for person's name
struct PersonName
{
   string firstName;
   string lastName;
};

// A declaration for person's important vitals
struct PersonVitals
{
   int height; // Heights in cms
   int weight; // Weight in kgs
};

// A declaration for person's important vitals
struct PersonInfo
{
   PersonName name; // Person's name
   PersonVitals vitals; // Person's viatls
};



int demoStruct() {
	cout << "\n*** DEMO of struct ***\n\n";

	cout << "\tInitializing for a person's name";
	PersonName pn = {"John", "Doe"} ;
	cout << "\t -" << pn.firstName << " / " << pn.lastName << endl;
	
	cout << "\tInitializing for a person's vitals";
	PersonVitals pv = {150, 50} ;
	cout << "\t -" << pv.height << " / " << pv.weight << endl;
	
	cout << "\tInitializing for first person's information - name and vitals";
	PersonInfo p1 = {pn, pv};
	cout << "\t -" << p1.name.firstName << " / " << p1.vitals.weight << endl;

	cout << "\tInitializing for second person's information - name and vitals";
	PersonInfo p2 = {"Jane", "Doe", 200, 100};
	cout << "\t -" << p2.name.firstName << " / " << p2.vitals.height << endl;

	cout << "\tInitializing for third person's information - name and vitals";
	PersonInfo p3 = {{"First", "Second"}, {300, 150}};
	cout << "\t -" << p3.name.firstName << " / " << p3.name.lastName << " / " << p3.vitals.height << " / " << p3.vitals.weight << endl;

	return 0;
}

int demoStaticMemoryAllocation() {
	cout << "\n*** DEMO of static memory allocation ***\n\n";

	// Problem: find the average of a random set of random numbers
	
	// Static case - will have to assume an upper bound of 100 numbers to be stored
	
	// Credits: https://www.cplusplus.com/reference/cstdlib/rand/
    
	// initialize random seed: 
	srand (time(NULL));
	
	  // Actual code from below  
	int UPPER_BOUND = 100;
	int a[UPPER_BOUND];
	
	int times = rand() % UPPER_BOUND; // Numbers between 0 to 99
	int i, sum = 0;
	
	// Store random numbers
	for(i=0;i<times;i++) {
		a[i] = rand() % (10 * UPPER_BOUND);// Store a random number between 0 to 999
		sum += a[i]; // Store the cummulative sums
	}
	
	// Give the average
	cout << "Average of " << times << " random numbers is - " << 
(sum / times) << endl;
	cout << "Wasted memory = " << (UPPER_BOUND - times) << " spaces in the array." << endl;
	cout << "Numbers are: " << endl;
	for(i=0;i<times;i++) {
			cout << "\t i = " << i << ": " << a[i] << endl; // Print each number
		}
	
	
	return 0;
}

int demoDynamicMemoryAllocation() {
	cout << "\n*** DEMO of dynamic memory allocation ***\n\n";

	// Problem: find the average of a random set of random numbers
	
	// Static case - will have to assume an upper bound of 100 numbers to be stored
	
	// Credits: https://www.cplusplus.com/reference/cstdlib/rand/
    
	// initialize random seed: 
	srand (time(NULL));
	
	  // Actual code from below  
	int UPPER_BOUND = 100;
	int times = rand() % UPPER_BOUND; // Numbers between 0 to 99
	

	int *a = new int[times];

	int i, sum = 0;
	
	// Store random numbers
	for(i=0;i<times;i++) {
		a[i] = rand() % (10 * UPPER_BOUND);// Store a random number between 0 to 999
		sum += a[i]; // Store the cummulative sums
	}
	
	// Give the average
	cout << "Average of " << times << " random numbers is - " << 
(sum / times) << endl;
	cout << "Wasted memory = " << (times - times) << " spaces in the array." << endl;
	cout << "Numbers are: " << endl;
	for(i=0;i<times;i++) {
			cout << "\t i = " << i << ": " << a[i] << endl; // Print each number
		}
	
	// Free a
	delete[](a); // Alternatively delete(a)
	
	
	return 0;
}

int demoPersonClass() {
	
	cout << "\n*** DEMO of person class ***\n\n";

	PersonClassDemo p1;
	cout << "Person 1's first name = " << p1.getFirst() << endl; 
	cout << "Person 1's  last name = " << p1.getLast() << endl; 
	
	PersonClassDemo p2("Joginder");
	cout << "Person 2's  first name = " << p2.getFirst() << endl; 
	cout << "Person 2's  last name = " << p2.getLast() << endl; 
	
	PersonClassDemo p3("Joginder", "Singh");
	cout << "Person 3's  first name = " << p3.getFirst() << endl; 
	cout << "Person 3's  last name = " << p3.getLast() << endl; 
		
}

// --- Main ---

int main(int argc, char *argv[]) {

	char command = 0;
	string str = "";

	// First argument is program name
	cout << "Program name : " << argv[0] << endl;

	if (argc == 1) {
		printf("\nNo command passed. By default, will be demoing struct.");
		demoStruct();
	} else {
		// argc >= 2
		command = *argv[1];

		cout << "Command to run is - " << command << endl;
	}

	// Now execute based on command

	if (command == '0') {
		// Show data types
		demoStruct();
	} else if (command == '1') {
		// Demo static memory allocation
		demoStaticMemoryAllocation();
		
	} else if (command == '2') {
		// Demo reading of file
		demoDynamicMemoryAllocation();
		
	}  else if (command == '3') {
		// Demo class usage
		demoPersonClass();
		
	} 

	return 0;
}

