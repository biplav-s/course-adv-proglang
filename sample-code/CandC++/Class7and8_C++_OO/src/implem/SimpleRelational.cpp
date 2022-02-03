/*
 * SimpleRelational.cpp
 *
 *  Created on: Feb 2, 2022
 *      Author: biplavs
 */

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
SimpleRational static multiply(SimpleRational f1, SimpleRational f2) {
	
	int numerator = f1.get_numerator() * f2.get_numerator();
	int denominator = f1.get_denominator() * f2.get_denominator();
	
	SimpleRational result(numerator, denominator);
	
	return result;
}

// Prints the parts of the franction
void static print_fraction(SimpleRational f) {
	cout << f.get_numerator() << "/" << f.get_denominator() << "| valid = " << f.get_valid();
}



