/*
 * EmployeeExec.h
 *
 *  Created on: Feb 8, 2022
 *      Author: biplavs
 */

#ifndef HEADERS_EMPLOYEEEXEC_H_
#define HEADERS_EMPLOYEEEXEC_H_

#include "Employee.h"

class EmployeeExec : public Employee {
public:
	EmployeeExec();
	// EmployeeExec with name, current salary and raise percentage 
	EmployeeExec(string n, float c, float r);
	
	virtual ~EmployeeExec();
	
	virtual void myprint ();
    void myshow();
    
	
	virtual void printSalary();
};

#endif /* HEADERS_EMPLOYEEEXEC_H_ */
