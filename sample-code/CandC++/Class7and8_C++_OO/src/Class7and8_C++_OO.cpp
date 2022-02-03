#include <iostream>
#include <cstdlib>
using namespace std;

#include "PersonName.h" 
#include "SimpleRelational.cpp" 

// Using SimpleRelational
void demoSimpleRelational() {
	
	cout << "\n*** DEMO of Simple Relational ***\n\n";
	
	
	cout << "Testing: first fraction - " << endl;
	SimpleRational fract(1, 2); // The fraction 1/2
	cout << "The first fraction is ";
	print_fraction(fract);
	cout << endl << endl;
	
	cout << "Testing: second fraction - " << endl;
	
	// Used for demonstrating public data member
	// fract.numerator = 19;  // Works when numerator is public
	fract.set_numerator(19); 
	fract.set_denominator(4);
	cout << "The second fraction now is ";
	print_fraction(fract);
	cout << endl << endl;

	// Example of multiply
	cout << "Testing: third fraction - " << endl;
	SimpleRational fract1(1, 3);
	SimpleRational fract2(3, 4);
	SimpleRational prod = multiply(fract1, fract2);
	cout << "The product of ";
	print_fraction(fract1);
	cout << " and ";
	print_fraction(fract2);
	cout << " is ";
	print_fraction(prod);
	cout << endl << endl;
	
	// Demo div by zero
	cout << "Testing: fourth fraction - " << endl;
	fract.set_denominator(0); // Changing denominator
	cout << "The fourth fraction is ";
	print_fraction(fract);
	cout << endl << endl;

}

// Using PersonName class

void demoCodeOrganization() {
		
		cout << "\n*** DEMO of person class ***\n\n";

		PersonName p1;
		cout << "Person 1's first name = " << p1.getFirst() << endl; 
		cout << "Person 1's  last name = " << p1.getLast() << endl; 
		
		PersonName p2("Joginder");
		cout << "Person 2's  first name = " << p2.getFirst() << endl; 
		cout << "Person 2's  last name = " << p2.getLast() << endl; 
		
		PersonName p3("Joginder", "Singh");
		cout << "Person 3's  first name = " << p3.getFirst() << endl; 
		cout << "Person 3's  last name = " << p3.getLast() << endl; 
			
}

// ** Test function **
int main() {
	// Demo simple relational
	demoSimpleRelational();
	
	// Demo code org
	demoCodeOrganization();
}