/*
 * Intern.cpp
 *
 *  Created on: Feb 8, 2022
 *      Author: biplavs
 */

#include <iostream>
using namespace std;

#include <EmployeeIntern.h>

EmployeeIntern::EmployeeIntern() {
	// TODO Auto-generated constructor stub

}

// EmployeeIntern with name, current salary and raise percentage 
EmployeeIntern::EmployeeIntern(string n, float c, float r) {
	name = n;
	current_salary = c;
	raise_in_percent = r;
}

EmployeeIntern::~EmployeeIntern() {
	// TODO Auto-generated destructor stub
}

// Show different with and without virtual qualifier
void EmployeeIntern::myprint () {
	cout<< "EmployeeIntern: myprint derived class" <<endl;
}

void EmployeeIntern::myshow() {
	cout<< "EmployeeIntern: myshow derived class" <<endl;	
}

void EmployeeIntern::printSalary() {
	cout << "Salary of intern '" << name << "'is - " << endl;
	cout << "\t last - " << last_salary << endl;
	cout << "\t increment % - " << (raise_in_percent * 100) << endl;
	cout << "\t current - " << current_salary << endl;
}

