/*
 * AnotherChild.h
 *
 *  Created on: Feb 5, 2022
 *      Author: biplavs
 */

#ifndef ANOTHERCHILD_H_
#define ANOTHERCHILD_H_

#include "Parent.h"

class AnotherChild: public Parent {
	string location = "AnotherChild:default-location";
public:
	AnotherChild();
	AnotherChild(string);
	AnotherChild(string,string);
	virtual ~AnotherChild();

	void setName(string);

	string getLocation();
	void setLocation(string);
};

#endif /* ANOTHERCHILD_H_ */
