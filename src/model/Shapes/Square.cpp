/*
 * Square.cpp
 *
 *  Created on: Mar 24, 2015
 *      Author: Daniel
 */

#include "Square.h"

namespace shapes {

Square::Square() {
	this->length = 0;
}

Square::Square(int xLocation, int yLocation, const string& color) :
		Shape("Square", xLocation, yLocation, color) {

	int length = rand() % LENGTH_MAX + LENGTH_MIN;

	this->length = length;
}

Square::~Square() {
	// TODO Auto-generated destructor stub
}

} /* namespace shapes */
