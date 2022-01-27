/*
 * PersonClassDemo.cpp
 *
 *  Created on: Jan 25, 2022
 *      Author: biplavs
 */

#include "PersonClassDemo.h"

PersonClassDemo::PersonClassDemo() {
	firstName = "default-Maria";
	lastName = "default-Wang";

}

PersonClassDemo::PersonClassDemo(string first) {
	firstName = first;
	lastName = "default-Wang";

}

PersonClassDemo::PersonClassDemo(string first, string last) {
	firstName = first;
	lastName = last;

}

PersonClassDemo::~PersonClassDemo() {
	// TODO Auto-generated destructor stub
}

string PersonClassDemo::getFirst() {
	return firstName;
}

string PersonClassDemo::getLast() {
	return lastName;
}

