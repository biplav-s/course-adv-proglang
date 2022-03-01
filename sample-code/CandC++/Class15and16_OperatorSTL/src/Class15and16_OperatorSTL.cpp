//============================================================================
// Name        : Class15and16_OperatorSTL.cpp
// Author      : Biplav
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
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



int main() {
	cout << "Classes 15 and 16" << endl; // prints Classes 15 and 16
	
	demoRelationalOperators();
	
	demoBitOperators();
	
	return 0;
}
