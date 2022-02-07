//============================================================================
// Name        : Class9and10_C++_OOAdv.cpp
// Author      : Biplav
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include "Parent.h"
#include "Child.h"
#include "AnotherChild.h"
#include "GrandChild.h"

// Using Parent
void demoParent() {

	cout << "\n*** DEMO of Parent Class ***\n\n";


	cout << "Testing: data member - " << endl;
	Parent p; // Instantiate instance of parent
	cout << "The default parent is: " << p.getName() << endl;


	Parent p2 ("Another parent - p2"); // Instantiate instance of parent
	cout << "The second parent is: " << p2.getName() << endl;
}

// Using Child
void demoChild() {

	cout << "\n*** DEMO of Child Class ***\n\n";


	cout << "Testing: data member - " << endl;
	Child c; // Default instantiate instance of child will work
	// Child c("first child"); // This instance of child will not work
	//      as constructor with name is overridden
	cout << "The default child is: " << c.getName() << endl;
}

// Using Another Child that allows setting its name and location, optionally
void demoAnotherChild() {

	cout << "\n*** DEMO of Another Child Class ***\n\n";


	cout << "Testing: data member - " << endl;
	AnotherChild a; // Default instantiate instance of child will work
	a.setName("Beta"); // Setting name
	// We will know which set was used - parent's or child's
	cout << "The child's name is: " << a.getName() << endl;
	cout << "The child's location is: " << a.getLocation() << endl;
}

// Using Grand Child that has nothing new
void demoGrandChild() {

	cout << "\n*** DEMO of Grand Child Class ***\n\n";


	cout << "Testing: data member - " << endl;
	GrandChild g; // Default instantiate instance of child will work

	// We will know which set was used - parent's or child's
	cout << "The grandchild's name is: " << g.getName() << endl;
	cout << "The grandchild's location is: " << g.getLocation() << endl;
}

int main() {

	demoParent(); // Demonstrate parent
	demoChild(); // Demonstrate child
	demoAnotherChild(); // Demonstrate child
	demoGrandChild(); // Demonstrate grand child

	return 0; 
}
