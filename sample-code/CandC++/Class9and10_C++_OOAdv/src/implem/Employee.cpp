/*
 * Employee.cpp
 *
 *  Created on: Feb 8, 2022
 *      Author: biplavs
 */
#include <iostream>
using namespace std;

#include <Employee.h>

Employee::Employee() {
	// TODO Auto-generated constructor stub

}


// Employee with name, current salary 
Employee::Employee(string n, float c) {
	name = n;
	current_salary = c;
}

// Employee with name, current salary and raise percentage 
Employee::Employee(string n, float c, float r) {
	name = n;
	current_salary = c;
	raise_in_percent = r;
}

Employee::~Employee() {
	// TODO Auto-generated destructor stub
}

// Show different with and without virtual qualifier
void Employee::myprint () {
	cout<< "Employee: myprint base class" <<endl;
}

void Employee::myshow() {
	cout<< "Employee: myshow base class" <<endl;	
}


// Update salary by making 
 void Employee::raiseSalary() {
	last_salary = current_salary;
	current_salary = last_salary + last_salary * raise_in_percent;
}

void Employee::printSalary() {
	cout << "Salary of '" << name << "'is - " << endl;
	cout << "\t last - " << last_salary << endl;
	cout << "\t increment % - " << (raise_in_percent * 100) << endl;
	cout << "\t current - " << current_salary << endl;
}



