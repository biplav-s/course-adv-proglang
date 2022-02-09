/*
 * EmployeeExec.cpp
 *
 *  Created on: Feb 8, 2022
 *      Author: biplavs
 */

#include <iostream>
using namespace std;

#include <EmployeeExec.h>

EmployeeExec::EmployeeExec() {
	// TODO Auto-generated constructor stub

}

// EmployeeExec with name, current salary and raise percentage 
EmployeeExec::EmployeeExec(string n, float c, float r) {
	name = n;
	current_salary = c;
	raise_in_percent = r;
}

EmployeeExec::~EmployeeExec() {
	// TODO Auto-generated destructor stub
}

// Show different with and without virtual qualifier
void EmployeeExec::myprint () {
	cout<< "EmployeeExec: myprint derived class" <<endl;
}

void EmployeeExec::myshow() {
	cout<< "EmployeeExec: myshow derived class" <<endl;	
}

void EmployeeExec::printSalary() {
	cout << "Salary of exec '" << name << "'is - " << endl;
	cout << "\t last - " << last_salary << endl;
	cout << "\t increment % - " << (raise_in_percent * 100) << endl;
	cout << "\t current - " << current_salary << endl;
}

