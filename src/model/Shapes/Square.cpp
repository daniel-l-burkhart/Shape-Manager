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

Square::Square() {

}

Square::Square(int xLocation, int yLocation, const string& color) :
		Rectangle("Square", xLocation, yLocation, color) {

	Shape::setArea(Rectangle::ComputeArea());
	Shape::setPerimeter(Rectangle::ComputePerimeter());
}

Square::~Square() {
	// TODO Auto-generated destructor stub
}

vector<string> Square::PrintShape() {

	vector<string> squareString = Shape::PrintShape();

	int side = Rectangle::getWidth();

	squareString.push_back("Length: " + Shape::intToString(side));

	return squareString;
}

} /* namespace shapes */
