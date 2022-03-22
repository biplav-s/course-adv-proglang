//============================================================================
// Name        : Class17and18_TestingAdvPointers.cpp
// Author      : Biplav
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <chrono>
using namespace std;

// -----------------------------------
// For class on testing

 // Example from: https://en.cppreference.com/w/cpp/chrono
long fibonacci(unsigned int n)
{
	
    if (n < 2) 
    	return n;
    
    return fibonacci(n-1) + fibonacci(n-2);
}

 
void demoTestingFibonacci()
{
	for (int n = 5; n<= 45; n=n+5) {
		cout << "Calculating fibonacci: start of n =  " << n << endl;
		auto  start = std::chrono::steady_clock::now();
		
		long result = fibonacci(n);
    	auto  end = std::chrono::steady_clock::now();
    
    	auto elapsed_time = end - start;
    	std::chrono::duration<double> diff_in_seconds = end - start;
    
    	cout << "f(" << n << ") = " << result << '\n';

    	cout << "elapsed time: " << elapsed_time.count() << " ticks\n";
    	cout << "elapsed time (in sec): " << diff_in_seconds.count() << "s\n";
    	
	}
}

// -----------------------------------
// For illustrating advanced usage of pointers

// Demonstrate swapping of numbers
void swapNumbersReference(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

// Demonstrate swapping of numbers
void swapNumbersPointers(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

// Demonstrate user defined swap of values using pointers
void demoNumberValueSwapWithReference()
{
	int a = 10 ;
	int b = 20;

	cout << "INFO: Demonstrating Number Swap Using References - " << endl;
	
	// Printing before
	cout << "Before:" << endl;
	cout << "\t a-" << a << " / b-" << b << endl;

	// Now try swap with reference
	swapNumbersReference(a, b);
	
	// Printing after
	cout << "after (reference):" << endl;
	cout << "\t a-" << a << " / b-" << b << endl;

}

// Demonstrate user defined swap of values using pointers
void demoNumberValueSwapWithPointers()
{
	int a = 10 ;
	int b = 20;

	cout << "INFO: Demonstrating Number Swap Using Pointers - " << endl;

	
	// Printing before
	cout << "Before:" << endl;
	cout << "\t a-" << a << " / b-" << b << endl;


	// Now try swap with pointers
	swapNumbersPointers(&a, &b);
	
	// Printing after
	cout << "after (pointers):" << endl;
	cout << "\t a-" << a << " / b-" << b << endl;

}


struct PersonName
{
   string firstName;
   string lastName;
};

// Demonstrate user defined swap of values using references
void swapPeopleReference(PersonName &a, PersonName &b)
{
	PersonName temp = a;
	a = b;
	b = temp;
}

// Demonstrate user defined swap of values using pointers
void swapPeople(PersonName *a, PersonName *b)
{
	PersonName *temp = a;
	a = b;
	b = temp;
}

// Demonstrate user defined swap of values using pointers
void swapPeopleCorrect(PersonName **a, PersonName **b)
{
	PersonName *temp = *a;
	*a = *b;
	*b = temp;
}

// Demonstrate user defined swap of values using references
void demoStructValueSwapWithReferences()
{
	PersonName a = {"John", "First"} ;
	PersonName b = {"Jane", "Second"} ;

	cout << "INFO: Demonstrating Person Struct Swap Using References - " << endl;

	
	// Printing basic struct initialization
	cout << "Basic struct initialization:" << endl;
	cout << "\t -" << a.firstName << " / " << a.lastName << endl;
	cout << "\t -" << b.firstName << " / " << b.lastName << endl;

	// Now try swap with reference
	swapPeopleReference(a, b);
	
	// Printing after swap (reference)
	cout << "After (reference):" << endl;
	cout << "\t -" << a.firstName << " / " << a.lastName << endl;
	cout << "\t -" << b.firstName << " / " << b.lastName << endl;

}

// Demonstrate user defined swap of values using pointers
void demoStructValueSwapWithPointers()
{
	PersonName a = {"John", "First"} ;
	PersonName b = {"Jane", "Second"} ;

	cout << "INFO: Demonstrating Person Struct Swap Using Pointers - " << endl;


	// Printing basic struct initialization
	cout << "Basic struct initialization:" << endl;
	cout << "\t -" << a.firstName << " / " << a.lastName << endl;
	cout << "\t -" << b.firstName << " / " << b.lastName << endl;

	PersonName *pa = &a;
	PersonName *pb = &b;
	
	// Printing with pointers
	cout << "Printing with pointer references:" << endl;
	cout << "\t -" << pa->firstName << " / " << pa->lastName << endl;
	cout << "\t -" << pb->firstName << " / " << pb->lastName << endl;

	// Now try swap
	swapPeople(pa, pb);
	
	// Printing after swap
	cout << "After (incorrect):" << endl;
	cout << "\t -" << pa->firstName << " / " << pa->lastName << endl;
	cout << "\t -" << pb->firstName << " / " << pb->lastName << endl;

	// Now try swap with double pointers
	swapPeopleCorrect(&pa, &pb);
	
	// Printing after swap (correct)
	cout << "After (correct):" << endl;
	cout << "\t -" << pa->firstName << " / " << pa->lastName << endl;
	cout << "\t -" << pb->firstName << " / " << pb->lastName << endl;

}


int add(int x, int y) {
	cout << "INFO: add - ing - ";
	return x + y;
}

int multiply(int x, int y) {
	cout << "INFO: multiply - ing - ";	
	return x * y;
}

int subtract(int x, int y) {
	cout << "INFO: subtract - ing - ";	
	return x - y;
}

int evaluate(int (*f)(int, int), int x, int y) {
	return f(x, y);
}



// Demonstrate usage of function pointers
void demoFunctionPointers()
{
	int a = 2;
	int b = 10;
	
	cout << "INFO: Demonstrating Usage of Function Pointers - " << endl;

	
	cout << "Evaluating a function - add - directly with params: " << endl; 
	cout << "\t a=" << a << ", b=" << b << endl;
	cout << "\t result=" << add(a, b) << endl;
	
	int (*f_ptr)(int, int); // declaring f_ptr as a pointer to a function
	f_ptr = &add;
	cout << "Evaluating a function - add - via a function pointer with params: " << endl; 
	cout << "\t a=" << a << ", b=" << b << endl;
	cout << "\t result=" << f_ptr(a, b) << endl;
	

	cout << "Passing a function - add - as argument and evaluating it with params: " << endl; 
	cout << "\t a=" << a << ", b=" << b << endl;
	cout << "\t result=" << evaluate(&add, a, b) << endl;

	
}



// Demonstrate usage of function pointer arrays
void demoFunctionPointerArrays()
{
	int a = 2;
	int b = 10;
	
	cout << "INFO: Demonstrating Usage of Function Pointer Arrays - " << endl;

	
	int (*f[3])(int, int);
	f[0] = &add;
	f[1] = &multiply;
	f[2] = &subtract;

	cout << "Calling function array via function pointers" << endl; 
	for(int i=0; i<3; i++) {
		cout << "Running function - " << endl; 
		cout << "\t a=" << a << ", b=" << b << endl;
		cout << "\t result=" << f[i](a, b) << endl;
	}
}


// -----------------------------------
// Main 

int main(int argc, char *argv[]) {

	char command = 0;
	string str = "";

	cout << "Classes 17 and 18" << endl; // for specific lectures 
	
	// First argument is program name
	cout << "Program name : " << argv[0] << endl;

	if (argc == 1) {
		printf("\nNo command passed. By default, will be demoing Fibonacci.");
		demoTestingFibonacci();

		return 0;
	} else {
		// argc >= 2
		command = *argv[1];

		cout << "Command to run is - " << command << endl;
	}

	// Now execute based on command

	if (command == '0') {
		// Demo Fibonacci
		demoTestingFibonacci();
	} else if (command == '1') {
		// Demo reference based number swap
		demoNumberValueSwapWithReference();
	} else if (command == '2') {
		// Demo pointer based number swap
		demoNumberValueSwapWithPointers();
	} else if (command == '3') {
		// Demo reference based  struct swap
		demoStructValueSwapWithReferences();
	} else if (command == '4') {
		// Demo pointer based  struct swap
		demoStructValueSwapWithPointers();
	} else if (command == '5') {
		// Demo function pointers
		demoFunctionPointers();
	} else if (command == '6') {
		// Demo function pointers
		demoFunctionPointerArrays();
	} else {
		// For more demos
		
	}

	return 0;
}
