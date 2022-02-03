/*
 * PersonName.h
 *
 *  Created on: Feb 2, 2022
 *      Author: biplavs
 */

#ifndef PERSONNAME_H_
#define PERSONNAME_H_

#include <string>

using namespace std;

class PersonName {
	string firstName;
	string lastName;
public:
	PersonName();
	PersonName(string);
	PersonName(string, string);

	virtual ~PersonName();
	
	string getFirst();
	string getLast();
};

#endif /* PERSONNAME_H_ */
