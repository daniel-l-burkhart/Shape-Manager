/*
 * Square.cpp
 *
 *  Created on: Mar 24, 2015
 *      Author: Daniel
 */

#include "Square.h"
#include <cstdlib>

#include "Shape.h"
namespace model {

const int LENGTH_MAX = 36;
const int LENGTH_MIN = 14;

Square::Square() {
	this->length = 0;
}

Square::Square(int xLocation, int yLocation, const string& color) :
		Shape("Square", xLocation, yLocation, color) {

	int length = rand() % LENGTH_MAX + LENGTH_MIN;

	this->length = length;

	Shape::setArea(this->Area());
	Shape::setPerimeter(this->Perimeter());
}

double Square::Perimeter() {

	return (4 * this->length);
}

double Square::Area() {

	return (this->length * this->length);
}

Square::~Square() {
	// TODO Auto-generated destructor stub
}

} /* namespace shapes */
