/*
 * AnotherChild.cpp
 *
 *  Created on: Feb 5, 2022
 *      Author: biplavs
 */

#include "AnotherChild.h"

AnotherChild::AnotherChild() {
	// TODO Auto-generated constructor stub

}

AnotherChild::AnotherChild(string n) {
	myname = "AnotherChild:" + n;
}

AnotherChild::AnotherChild(string n, string l) {
	myname = "AnotherChild:" + n;
	location = "AnotherChild:" + l;
}

AnotherChild::~AnotherChild() {
	// TODO Auto-generated destructor stub
}


void AnotherChild::setName(string n) {
	myname = "AnotherChild:" + n;
}

string AnotherChild::getLocation() {
	return location;
}

void AnotherChild::setLocation(string l){
	location = "AnotherChild:" + l;
}

