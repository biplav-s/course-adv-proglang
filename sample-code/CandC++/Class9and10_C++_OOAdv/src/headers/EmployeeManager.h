/*
 * Manager.h
 *
 *  Created on: Feb 8, 2022
 *      Author: biplavs
 */

#ifndef HEADERS_EMPLOYEEMANAGER_H_
#define HEADERS_EMPLOYEEMANAGER_H_

#include "Employee.h"

class EmployeeManager : public Employee {
public:
	EmployeeManager();
	// EmployeeManager with name, current salary and raise percentage 
	EmployeeManager(string n, float c, float r);
	
	virtual ~EmployeeManager();
	
	virtual void myprint ();
	void myshow();
	
	
	virtual void printSalary();
};

#endif /* HEADERS_EMPLOYEEMANAGER_H_ */
