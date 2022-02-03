/*
 * PersonName.cpp
 *
 *  Created on: Feb 2, 2022
 *      Author: biplavs
 */

#include "PersonName.h"


PersonName::PersonName() {
	firstName = "default-Maria";
	lastName = "default-Wang";

}

PersonName::PersonName(string first) {
	firstName = first;
	lastName = "default-Wang";

}

PersonName::PersonName(string first, string last) {
	firstName = first;
	lastName = last;

}

PersonName::~PersonName() {
	// TODO Auto-generated destructor stub
}

string PersonName::getFirst() {
	return firstName;
}

string PersonName::getLast() {
	return lastName;
}



