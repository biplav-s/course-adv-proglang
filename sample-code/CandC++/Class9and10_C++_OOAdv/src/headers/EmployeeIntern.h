/*
 * Intern.h
 *
 *  Created on: Feb 8, 2022
 *      Author: biplavs
 */

#ifndef HEADERS_EMPLOYEEINTERN_H_
#define HEADERS_EMPLOYEEINTERN_H_

#include "Employee.h"

class EmployeeIntern  : public Employee {
public:
	EmployeeIntern();
	// EmployeeIntern with name, current salary and raise percentage 
	EmployeeIntern(string n, float c, float r);
	
	virtual ~EmployeeIntern();
	
	virtual void myprint ();
	void myshow();
	
	
	virtual void printSalary();
};

#endif /* HEADERS_EMPLOYEEINTERN_H_ */
