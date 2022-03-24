/*
 * Point.cpp
 *
 *  Created on: Mar 23, 2022
 *      Author: biplavs
 */

#include <iostream>
#include "Point.h"
using namespace std;


Point::Point(int xx, int yy) {
	x = xx; 
	y = yy;
}

Point::~Point() {
	// TODO Auto-generated destructor stub
}

Point Point::operator + (Point &p) {
	return Point(x + p.x, y + p.y);
}

Point Point::operator - (Point &p) {
	return Point(x - p.x, y - p.y);
}

void Point::print() {
	cout << "Point's values are:" << endl;
	cout << "\t x: " << x << endl;
	cout << "\t y: " << y << endl;
}


