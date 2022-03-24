/*
 * Point.h
 *
 *  Created on: Mar 23, 2022
 *      Author: biplavs
 */

#ifndef POINT_H_
#define POINT_H_

class Point {

	public:
	
		int x, y;
		
		Point(int x, int y);
		virtual ~Point();
	
		Point operator + (Point &p);
		Point operator - (Point &p);
	
		void print();
};

#endif /* POINT_H_ */
