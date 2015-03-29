/*
 * Square.cpp
 *
 *  Created on: Mar 24, 2015
 *      Author: Daniel
 */

#include "Square.h"
#include <cstdlib>

#include "Shape.h"

#include "Rectangle.h"
namespace model {

const int LENGTH_MAX = 36;
const int LENGTH_MIN = 14;

Square::Square() {
	this->length = 0;
}

Square::Square(int xLocation, int yLocation, const string& color) :
		Rectangle("Square", xLocation, yLocation, color) {

	int length = rand() % LENGTH_MAX + LENGTH_MIN;

	this->length = length;

	Shape::setArea(this->ComputeArea());
	Shape::setPerimeter(this->ComputePerimeter());
}

double Square::ComputeArea() {
	return (this->length * this->length);
}

double Square::ComputePerimeter() {
	return (4 * this->length);
}

Square::~Square() {
	// TODO Auto-generated destructor stub
}

string Square::Print() {
	string squareString = Shape::Print();
	squareString += ("Length: " + this->length + std::string("\r\n"));
	return squareString;
}

} /* namespace shapes */
