/*
 * Parent.h
 *
 *  Created on: Feb 5, 2022
 *      Author: biplavs
 */

#ifndef PARENT_H_
#define PARENT_H_

#include <string>

using namespace std;

class Parent {
protected:
	string myname; // name of the class

public:
	Parent();
	Parent(string);
	virtual ~Parent();

	string getName();
	void setName(string);
};

#endif /* PARENT_H_ */
