/*
 * Manager.cpp
 *
 *  Created on: Feb 8, 2022
 *      Author: biplavs
 */

#include <iostream>
using namespace std;

#include <EmployeeManager.h>

EmployeeManager::EmployeeManager() {
	// TODO Auto-generated constructor stub

}

// EmployeeManager with name, current salary and raise percentage 
EmployeeManager::EmployeeManager(string n, float c, float r) {
	name = n;
	current_salary = c;
	raise_in_percent = r;
}

EmployeeManager::~EmployeeManager() {
	// TODO Auto-generated destructor stub
}

// Show different with and without virtual qualifier
void EmployeeManager::myprint () {
	cout<< "EmployeeManager: myprint derived class" <<endl;
}

void EmployeeManager::myshow() {
	cout<< "EmployeeManager: myshow derived class" <<endl;	
}

void EmployeeManager::printSalary() {
	cout << "Salary of manager '" << name << "'is - " << endl;
	cout << "\t last - " << last_salary << endl;
	cout << "\t increment % - " << (raise_in_percent * 100) << endl;
	cout << "\t current - " << current_salary << endl;
}

