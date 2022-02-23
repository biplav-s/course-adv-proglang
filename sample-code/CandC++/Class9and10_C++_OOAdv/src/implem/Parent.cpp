/*
 * Parent.cpp
 *
 *  Created on: Feb 5, 2022
 *      Author: biplavs
 */

#include <iostream>
#include "Parent.h"

Parent::Parent() {
	myname = "Parent:default-name";

	cout << "\n \t DEMO of Constructor - Parent Class ***\n\n";


}

Parent::Parent(string n) {
	// assign name
	myname = "Parent:" + n;

	cout << "\n \t DEMO of Constructor - Parent Class ***\n\n";

}

Parent::~Parent() {
	// TODO Auto-generated destructor stub

	cout << "\n \t DEMO of Destructor - GrandChild Class ***\n\n";

}

string Parent::getName() {
	return myname;
}


void Parent::setName(string n) {
	myname = "Parent:" + n;
}

