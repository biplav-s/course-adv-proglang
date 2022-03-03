//============================================================================
// Name        : Class15and16_OperatorSTL.cpp
// Author      : Biplav
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <cfenv>

#include <map>
#include <iterator>

using namespace std;


// A demonstration of relational operators
void demoRelationalOperators() {
	
	cout << "\nDEMO: RELATIONAL Operators - " << endl;
	
	int a = 5;
	float b = 5.0;	
	cout << "Checking = on ("<< a << "," << b << "). Result is: " 
			<< (a == b) << endl;

	
	a = 5.1;
	b = 5.2;
	cout << "Checking >= on ("<< a << "," << b << "). Result is: " 
			<< (a >= b) << endl;

	char c = 'A';
	char d = 'D';
	cout << "Checking char < on ("<< c << "," << d << "). Result is: "  
			<< (c < d) << endl;

	string cs = "Alpha";
	string ds = "Delta";
	cout << "Checking string < on ("<< cs << "," << ds << "). Result is: "  
			<< (cs < ds) << endl;

}


// A demonstration of bitwise operators
void demoBitOperators() {
	
	cout << "\nDEMO: BITWISE Operators - " << endl;

	int c = 011;
	int d = 027;
	
	cout << "Checking '&' on ("<< oct << c << "," << oct << d << "). Result is: " 
			<< oct << (c & d) << endl;

	cout << "Checking '~' on ("<< c << "). Result is: " 
			<< oct << (~c) << endl;

	
	cout << "Checking '|' on ("<< c << "," << d << "). Result is: " 
			<< oct << (c | d) << endl;

	cout << "Checking '^' on ("<< c << "," << d << "). Result is: " 
			<< oct << (c ^ d) << endl;

}


// A demonstration of std lib - strings
void demoStrings() {

	// Reference: https://en.cppreference.com/w/cpp/string/basic_string
	
	cout << "\nDEMO: Strings STL - " << endl;

	string s = "CSCE 240 - Advanced Prog.";
	cout << "String:" << s << ", oper:front, result:" << s.front() << endl;
	cout << "String:" << s << ", oper:back, result:" << s.back() << endl;
	cout << "String:" << s << ", oper:size, result:" << s.size() << endl;
	cout << "String:" << s << ", oper:capacity, result:" << s.capacity() << endl;
	cout << "String:" << s << ", oper:substr(20,24), result:" << s.substr(20,24) << endl;

}

// A demonstration of std lib - mathematic functions
void demoMaths() {

	// Reference: https://en.cppreference.com/w/cpp/string/basic_string
	
	cout << "\nDEMO: Mathematical STLs - " << endl;

	float n = 27;
	std::cout << "Maths: oper:sqrt (sq root) of n:" << n << ", result:" << sqrt(n) << endl; 
	std::cout << "Maths: oper:cqrt (cubic root) of n:" << n << ", result:" << cbrt(n) << endl; 
	
	n = 27.498;
	std::cout << "Maths: oper:round,  n:" << n << ", result:" << round(n) << endl; 
	std::cout << "Maths: oper:nearby int,  n:" << n << ", result:" << nearbyint(n) << endl; 
	std::cout << "Maths: oper:nearbyint with n - 0.5,  n:" << n << ", result:" << nearbyint(n - 0.5) << endl; 
	std::cout << "Maths: oper:nearbyint with n + 0.5,  n:" << n << ", result:" << nearbyint(n + 0.5) << endl; 

	std::cout << "Maths: oper:nearbyint,  n:" << -INFINITY << ", result:" << nearbyint(-INFINITY) << endl; 
	std::cout << "Maths: oper:nearbyint,  n:" << NAN << ", result:" << nearbyint(NAN) << endl; 
		    
}

// A demonstration of std lib - algo implementations
void demoAlgos() {

	// Reference: https://en.cppreference.com/w/cpp/algorithm/next_permutation
	
	cout << "\nDEMO: Algos in STLs - " << endl;
	
	string s_orig = "dcab";
	string s = s_orig;
	sort(s.begin(), s.end());
	cout << "Algos: permutation/sort of s:" << s_orig << ", result:" << s << endl; 

	while(next_permutation(s.begin(), s.end())) {
		cout << "Algos: permutation of s:" << s_orig << ", result:" << s << endl; 
	}
				    
}

// A demonstration of std lib - container implementations
void demoContainer() {

	// Reference: https://en.cppreference.com/w/cpp/container/map
	
	cout << "\nDEMO: Container in STLs - " << endl;
	
	// A map of  (strings, int) pairs
	map<string, int> m;
	m.insert(pair<string,int>("Prog Course", 240));
	m.insert(pair<string,int>("AI Course", 580));
	m.insert(pair<string,int>("Intro CS Course", 101));
	m.insert(pair<string,int>("NLP Course", 771));
	 
	map<string,int>::iterator it = m.begin();
	
	while (it != m.end()) {
		
		string coursename = it->first;
		int coursenumber = it->second;
		
		cout << "Algos: container has - member:(" << coursename << ":" <<
				coursenumber << ")" << endl; 
		
		// Increment the iterator
		it++;

	}
				    
}


// -----------------------

int main(int argc, char *argv[]) {

	char command = 0;
	string str = "";

	cout << "Classes 15 and 16" << endl; // prints Classes 15 and 16
	
	// First argument is program name
	cout << "Program name : " << argv[0] << endl;

	if (argc == 1) {
		printf("\nNo command passed. By default, will be demoing inheritance.");
		demoRelationalOperators();

		return 0;
	} else {
		// argc >= 2
		command = *argv[1];

		cout << "Command to run is - " << command << endl;
	}

	// Now execute based on command

	if (command == '0') {
		// Demo relational operators
		demoRelationalOperators();
	} else if (command == '1') {
		// Demo bit operators
		demoBitOperators();
	} else if (command == '2') {
		// Demo string STL
		demoStrings();
	} else if (command == '3') {
		// Demo Maths STL
		demoMaths();
	} else if (command == '4') {
		// Demo Algos STL
		demoAlgos();
	} else if (command == '5') {
		// Demo Container STL
		demoContainer();
		
	} else {
		// For more demos
	}

	return 0;
}
