/*
 * Square.cpp
 *
 *  Created on: Mar 24, 2015
 *      Author: Daniel
 */

#include "Square.h"
#include "Shape.h"
#include "Rectangle.h"

#include <cstdlib>

namespace model {

/**
 * The constructor of the class.
 */
Square::Square() {

}

/**
 * The constructor that instantiates a new square.
 * @param xLocation
 * 		The X-Location of the shape
 * @param yLocation
 * 		The Y-Location of the Shape.
 * @param color
 * 		The color of the shape.
 */
Square::Square(int xLocation, int yLocation, const string& color) :
		Rectangle("Square", xLocation, yLocation, color) {

	Shape::setArea(Rectangle::ComputeArea());
	Shape::setPerimeter(Rectangle::ComputePerimeter());
}

/**
 * Destructor of the shape object.
 */
Square::~Square() {

}

/**
 * Prints out the details of the square.
 * @return
 * 		A vector containing the details of the shape.
 */
vector<string> Square::PrintShape() {

	vector<string> squareVector = Shape::PrintShape();

	int side = Rectangle::getWidth();

	squareVector.push_back("Length: " + Shape::IntToString(side));

	return squareVector;
}

} /* namespace shapes */
