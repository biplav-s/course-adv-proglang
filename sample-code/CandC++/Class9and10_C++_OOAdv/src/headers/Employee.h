/*
 * Employee.h
 *
 *  Created on: Feb 8, 2022
 *      Author: biplavs
 */

#ifndef HEADERS_EMPLOYEE_H_
#define HEADERS_EMPLOYEE_H_

#include <string>

using namespace std;

class Employee {
	
protected: 

	string name; 

	float current_salary;

	float last_salary = -1; // Negative indicates not given
	float raise_in_percent = 0.05; // Let 5% be the default
	
public:
	Employee();
	
	// Employee with name, current salary 
	Employee(string n, float c);
	// Employee with name, current salary and raise percentage 
	Employee(string n, float c, float r);
	
	virtual ~Employee();
	
	// Show different with and without virtual qualifier
	virtual void myprint ();
	void myshow();
	
	
	// Update salary by making 
	void raiseSalary();
	
	virtual void printSalary();
};

#endif /* HEADERS_EMPLOYEE_H_ */
