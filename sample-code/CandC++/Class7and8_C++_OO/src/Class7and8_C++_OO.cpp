#include <iostream>
#include <cstdlib>
using namespace std;

// Credit: Based on example in Chapter 14 of C++ book -  
// Fundamentals of Programming by Richard L. Halterman

// Models a mathematical rational number
class SimpleRational {
	int numerator; // private by default
	// Used for demonstrating public data member
	// public: int numerator;
	int denominator;
	bool valid; // Checks if the rational number is valid

public:
	// Initializes the components of a Rational object
	SimpleRational(int n, int d): numerator(n), denominator(d) {
		if (d == 0) {
			// Flag that rational is not valid
			valid = false;
			// Display error message
			cout << "Zero denominator error\n";
			} else
				valid = true;
	}


	SimpleRational(): numerator(0), denominator(1) {}
	// Allows a client to reassign the numerator
	void set_numerator(int n) {
		numerator = n;
	}

	// Allows a client to reassign the denominator.
	// Disallows an illegal fraction (zero denominator).
	int set_denominator(int d) {
		if (d != 0)
			denominator = d;
		else {
			// Display error message
			cout << "ERROR: Zero denominator var passed\n";
			valid = false;
			return 1; // Flag problem
			}
		return 0;
	}

	// Allows a client to see the numerator's value.
	int get_numerator() {
		return numerator;
	}

	// Allows a client to see the denominator's value.
	int get_denominator() {
		return denominator;
	}
	
	// Allows to see fractions validity.
	bool get_valid() {
		return valid;
	}
};


// ** Utility functions ** 
// Returns the product of two rational numbers
SimpleRational multiply(SimpleRational f1, SimpleRational f2) {
	
	int numerator = f1.get_numerator() * f2.get_numerator();
	int denominator = f1.get_denominator() * f2.get_denominator();
	
	SimpleRational result(numerator, denominator);
	
	return result;
}

// Prints the parts of the franction
void print_fraction(SimpleRational f) {
	cout << f.get_numerator() << "/" << f.get_denominator() << "| valid = " << f.get_valid();
}


// ** Test function **
int main() {
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