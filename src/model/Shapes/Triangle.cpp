/*
 * Triangle.cpp
 *
 *  Created on: Mar 24, 2015
 *      Author: Daniel
 */

#include "Triangle.h"

namespace shapes {

Triangle::Triangle() {

	this->base = 0;
	this->height = 0;
}

Triangle::Triangle(int xLocation, int yLocation, const string& color) :
		Shape("Triangle", xLocation, yLocation, color) {

	int base = rand() % BASE_MAX + BASE_MIN;
	int height = rand() % HEIGHT_MAX + HEIGHT_MIN;

	this->base = base;
	this->height = height;
}

Triangle::~Triangle() {
	// TODO Auto-generated destructor stub
}

} /* namespace shapes */
