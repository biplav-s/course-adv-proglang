/*
 * Parent.cpp
 *
 *  Created on: Feb 5, 2022
 *      Author: biplavs
 */

#include "Parent.h"

Parent::Parent() {
	myname = "Parent:default-name";

}

Parent::Parent(string n) {
	// assign name
	myname = "Parent:" + n;

}

Parent::~Parent() {
	// TODO Auto-generated destructor stub
}

string Parent::getName() {
	return myname;
}


void Parent::setName(string n) {
	myname = "Parent:" + n;
}

