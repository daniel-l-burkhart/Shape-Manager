/*
 * Circle.cpp
 *
 *  Created on: Mar 24, 2015
 *      Author: Daniel
 */

#include "Circle.h"

namespace shapes {

Circle::Circle() {

	this->diameter = 0;

}

Circle::Circle(int xLocation, int yLocation, const string& color) :
		Shape("Circle", xLocation, yLocation, color) {

	int diameter = rand() % DIAMETER_MAX + DIAMETER_MIN;

	this->diameter = diameter;
}

Circle::~Circle() {
	// TODO Auto-generated destructor stub
}

} /* namespace shapes */
