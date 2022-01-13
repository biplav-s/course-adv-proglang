//============================================================================
// Name        : Class2_C++_Pointers.cpp
// Author      : Instructor
// Version     :
// Copyright   : Your copyright notice
// Description : Sorting numbers, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


// Add the two numbers at the first location
int addNumbersAtFirstLocation(int *a, int *b) {
	
	int sum = *a + *b;
	*a = sum;

	return sum;
}

// Add the numbers and return the value
int addNumbers(int a, int b) {
	return a + b;
}


int main() {

	int x = 10;
	int y = 20;
	int result = -1;


	cout << "Testing adding of numbers:" << endl;
	cout << "\t x: " << x << endl;
	cout << "\t y: " << y << endl;
	result = addNumbers(x, y);
	cout << "\t add: " <<  result << endl;


	cout << "Testing adding of numbers by pointers:" << endl;
	cout << "\t x: " << x << endl;
	cout << "\t y: " << y << endl;
	result = addNumbersAtFirstLocation(&x, &y);
	cout << "\t add: " <<  result << endl;
	cout << "\t updated x value: " <<  x << endl;

	return 0;
}

