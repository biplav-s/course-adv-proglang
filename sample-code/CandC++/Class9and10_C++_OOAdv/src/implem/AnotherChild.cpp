/*
 * AnotherChild.cpp
 *
 *  Created on: Feb 5, 2022
 *      Author: biplavs
 */

#include <iostream>
#include "AnotherChild.h"

AnotherChild::AnotherChild() {
	// TODO Auto-generated constructor stub

	cout << "\n \t\t DEMO of Constructor - Another Child Class ***\n\n";

}

AnotherChild::AnotherChild(string n) {
	myname = "AnotherChild:" + n;

	cout << "\n \t\t DEMO of Constructor - Another Child Class ***\n\n";

}

AnotherChild::AnotherChild(string n, string l) {
	myname = "AnotherChild:" + n;
	location = "AnotherChild:" + l;

	cout << "\n \t\t DEMO of Constructor - Another Child Class ***\n\n";

}

AnotherChild::~AnotherChild() {
	// TODO Auto-generated destructor stub

	cout << "\n \t\t DEMO of Destructor - Another Child Class ***\n\n";

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

