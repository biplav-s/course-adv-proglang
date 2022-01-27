/*
 * PersonClassDemo.h
 *
 *  Created on: Jan 25, 2022
 *      Author: biplavs
 */

#ifndef PERSONCLASSDEMO_H_
#define PERSONCLASSDEMO_H_

#include <string>

using namespace std;

class PersonClassDemo {
	string firstName;
	string lastName;

public:
	PersonClassDemo();
	PersonClassDemo(string);
	PersonClassDemo(string, string);
	virtual ~PersonClassDemo();
	
	string getFirst();
	string getLast();
};

#endif /* PERSONCLASSDEMO_H_ */
