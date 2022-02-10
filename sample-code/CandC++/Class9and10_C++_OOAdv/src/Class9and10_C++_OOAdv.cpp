//============================================================================
// Name        : Class9and10_C++_OOAdv.cpp
// Author      : Biplav
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <regex>
using namespace std;

#include "Parent.h"
#include "Child.h"
#include "AnotherChild.h"
#include "GrandChild.h"

#include "Employee.h"
#include "EmployeeManager.h"
#include "EmployeeIntern.h"
#include "EmployeeExec.h"

// -------------------
// Demonstrate inheritance

// Using Parent
void demoParent() {

	cout << "\n*** DEMO of Parent Class ***\n\n";

	cout << "Testing: data member - " << endl;
	Parent p; // Instantiate instance of parent
	cout << "The default parent is: " << p.getName() << endl;

	Parent p2("Another parent - p2"); // Instantiate instance of parent
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

void demoInheritance() {

	demoParent(); // Demonstrate parent
	demoChild(); // Demonstrate child
	demoAnotherChild(); // Demonstrate child
	demoGrandChild(); // Demonstrate grand child

}

// -------------------

// Demonstrate polymorhism
void demoEmployeePolyBasic() {

	// Credits: Based on code at
	//    - https://www.geeksforgeeks.org/polymorphism-in-c/
	//    - https://www.geeksforgeeks.org/virtual-functions-and-runtime-polymorphism-in-c-set-1-introduction/
	cout << "\n*** DEMO of Poly Behavior Basic ***\n\n";

	// An array of employees
	Employee *emps[4];

	Employee e;
	emps[0] = &e;

	EmployeeManager em;
	emps[1] = &em;

	EmployeeIntern ei;
	emps[2] = &ei;

	EmployeeExec ee;
	emps[3] = &ee;

	for (int i = 0; i < 4; i++) {
		// Polymorphic Call: Calls myprint()
		// according to the actual object, not
		// according to the type of pointer
		emps[i]->myprint();

		// Polymorphic Call: Calls myshow()
		// according to the actual object, not
		// according to the type of pointer
		emps[i]->myshow();
	}

}

// Demonstrate polymorhism advanced
void demoEmployeePolyAdv() {

	cout << "\n*** DEMO of Poly Behavior Advanced Example ***\n\n";

	Employee *emps[4];

	Employee e("AnEmployee", 100);
	emps[0] = &e;

	EmployeeManager em("AnEmployeeManager", 100, 0.1);
	emps[1] = &em;

	EmployeeIntern ei("AnEmployeeIntern", 100, 0);
	emps[2] = &ei;

	EmployeeExec ee("AnEmployeeExec", 100, 10);
	emps[3] = &ee;

	for (int i = 0; i < 4; i++) {
		cout << " ------------------------------------- " << endl;
		cout << "Before raise: " << endl;
		// Polymorphic Call: Call to print salary
		// according to the actual object, not
		// according to the type of pointer
		emps[i]->printSalary();

		// Polymorphic Call: Call to raise salary
		// according to the actual object, not
		// according to the type of pointer
		emps[i]->raiseSalary();

		cout << "After raise: " << endl;
		// Polymorphic Call: Call to print salary
		// according to the actual object, not
		// according to the type of pointer
		emps[i]->printSalary();
	}

}

// Demonstrate regular expressions usage
void demoRegex() {

	string str_to_check = "Advanced Programming Techniques";
	string pattern = "(.*)(Prog)(.*)";
	regex pattern_to_check(pattern);

	if (regex_match(str_to_check, pattern_to_check))
		cout << "string - '" << str_to_check << "' matches pattern - "
				<< pattern << "\n";

	pattern = "[a-zA-Z_][a-zA-Z_0-9]*\\.[a-zA-Z0-9]+";
	// Match a letter (lowercase and then uppercase) or an underscore.
	// Then match zero or more characters, in which each may be a
	// letter, or an underscore or a digit. Then match a literal
	// dot (.). After the dot, match one or more characters, in which
	// each may be a letter or digit indicating file extension.

	string str2 = "AdvProg.pdf";
	string str3 = "Adv Prog.pdf";
	regex pattern_to_check2(pattern);

	 if (regex_match (str2, pattern_to_check2 ))
			cout << "string - '" << str2 << "' matches pattern - "
					<< pattern << "\n";

	 if (!regex_match (str3, pattern_to_check2 ))
			cout << "string - '" << str3 << "' does not match pattern - "
					<< pattern << "\n";


	cout << "** Demonstration of regex over **" << endl;
}

// --------
int main(int argc, char *argv[]) {

	char command = 0;
	string str = "";

	// First argument is program name
	cout << "Program name : " << argv[0] << endl;

	if (argc == 1) {
		printf("\nNo command passed. By default, will be demoing inheritance.");
		demoInheritance();

		return 0;
	} else {
		// argc >= 2
		command = *argv[1];

		cout << "Command to run is - " << command << endl;
	}

	// Now execute based on command

	if (command == '0') {
		// Demo inheritance
		demoInheritance();
	} else if (command == '1') {
		// Demo poly basic
		demoEmployeePolyBasic();
	} else if (command == '2') {
		// Demo poly adv usage
		demoEmployeePolyAdv();
	} else {
		// Demo regular expression usage
		demoRegex();
	}

	return 0;
}
