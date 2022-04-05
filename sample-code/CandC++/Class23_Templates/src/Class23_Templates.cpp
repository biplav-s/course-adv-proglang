//============================================================================
// Name        : Class23_Templates.cpp
// Author      : Biplav
// Version     :
// Copyright   : Your copyright notice
// Description : Samples for class on Templates -  C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <vector>
using namespace std;


// Check if a is less than b
template <typename T>
bool less_than(T a, T b) {
	return a < b;
	}

// Demonstrate template - simple
void demoTemplateSimple() {
	
	cout << "DEMO: Simple template usage" << endl;
	
	int a = 20, b = 30;
	cout << "INFO: Comparing int - a = " << a <<
			", b = " << b <<
			", result = " << less_than(a, b) << endl;
	
	float c = 20.2, d = 20.7;
	cout << "INFO: Comparing float - c = " << c <<
			", d = " << d <<
			", result = " << less_than(c, d) << endl;
	cout << "INFO: Comparing float - d = " << d <<
			", c = " << c <<
			", result = " << less_than(d, c) << endl;
	
	string w1 = "Alpha", w2 = "Beta";
	cout << "INFO: Comparing string - w1 = " << w1 <<
			", w2 = " << w2 <<
			", result = " << less_than(w1, w2) << endl;
	cout << "INFO: Comparing string - w2 = " << w2 <<
			", w1 = " << w1 <<
			", result = " << less_than(w2, w1) << endl;
		

}

// -------------------------------------------------------


// Do a sum of the members in the vector
template <typename T>
T sum(const vector<T>& v) {
	T result = 0;
	for (T elem : v)
	result = result + elem;
	return result;
}

// Demonstrate template - Medium
// Note: May need  -std=c++11 option for compiler
void demoTemplateMedium() {
	
	
	cout << "DEMO: Medium template usage" << endl;
	
	vector<int> v {10, 20, 30};
	cout << "INFO: Computing sum of int vector -  = " << sum(v) << endl;
	
	vector<double> d {10.0, 20.0, 30.0};
	cout << "INFO: Computing sum of double vector -  = " << sum(d) << endl;
		

	// Question: What happens if we use string ?
	// vector<string> s {"10", "20", "30"};
	// cout << "INFO: Computing sum of string vector -  = " << sum(s) << endl;
		

}

// -------------------------------------------------------

// Credit: Code based on https://www.programiz.com/cpp-programming/class-templates
template <class T>
class Calculator {
   private:
    T num1, num2;

   public:
    Calculator(T n1, T n2) {
        num1 = n1;
        num2 = n2;
    }

    void displayResult() {
        cout << "Numbers: " << num1 << " and " << num2 << "." << endl;
        cout << num1 << " + " << num2 << " = " << add() << endl;
        cout << num1 << " - " << num2 << " = " << subtract() << endl;
        cout << num1 << " * " << num2 << " = " << multiply() << endl;
        cout << num1 << " / " << num2 << " = " << divide() << endl;
    }

    T add() { return num1 + num2; }
    T subtract() { return num1 - num2; }
    T multiply() { return num1 * num2; }
    T divide() { return num1 / num2; }
};





// Demonstrate template - Medium
// Note: May need  -std=c++11 option for compiler
void demoClassTemplates() {
	
	
	cout << "DEMO: Class template usage" << endl;
	
    Calculator<int> intCalc(10, 20);

    cout << "\n INFO: Results with ints:" << endl;
    intCalc.displayResult();

    Calculator<float> floatCalc(10.1, 20.2);
    
    cout << "\n INFO: Results with floats:" << endl;
    floatCalc.displayResult();

}

// -------------------------------------------------------

// Credit: Code based on https://www.programiz.com/cpp-programming/class-templates

// Class template with multiple parameters
template <class A, class B>
class MultipleClassTemplate {
   private:
    A a;
    B b;

   public:
    MultipleClassTemplate(A aa, B bb) : a(aa), b(bb) {}  // constructor

    void printValues() {
        cout << "\ta = " << a << endl;
        cout << "\tb = " << b << endl;
    }
};

// Demonstrate mixed class template 
// Note: May need  -std=c++11 option for compiler
void demoMultipleClassTemplates() {
	
	
	cout << "DEMO: Multiple class template usage" << endl;
	
	MultipleClassTemplate<int, string> m1(10, "Ten");
	    cout << "INFO: m1 values: " << endl;
	    m1.printValues();
	    
		MultipleClassTemplate<double, int> m2(10.01, 10);
		    cout << "INFO: m2 values: " << endl;
		    m2.printValues();
		    

}

// -------------------------------------------------------

int main(int argc, char *argv[]) {
	cout << "Class on Templates" << endl; // for Class 23
	
	char command = 0;
	string str = "";

	// First argument is program name
	cout << "Program name : " << argv[0] << endl;

	if (argc == 1) {
		printf("\nNo command passed. By default, running with option 0.");
		command = '0';
	} else {
		// argc >= 2
		command = *argv[1];

		cout << "Command to run is - " << command << endl;
	}

	// Now execute based on command

	if (command == '0') {
		// Show simple templates
		demoTemplateSimple();
	} else if (command == '1') {
		// Show demo templates
		demoTemplateMedium();
	} else if (command == '2') {
		// Demo class templates
		demoClassTemplates();
	} else {
		// future option
		demoMultipleClassTemplates();
	} 
	
	return 0;
}
