/*
 * Circle.cpp
 *
 *  Created on: Mar 24, 2015
 *      Author: Daniel
 */

#include "Circle.h"

#include "Shape.h"
#define _USE_MATH_DEFINES

#include <cmath>
#include <cstdlib>

namespace model {

const int DIAMETER_MAX = 26;
const int DIAMETER_MIN = 14;

/**
 * The default constructor of the class.
 */
Circle::Circle() {

	this->diameter = 0;

}

/**
 * The constructor that makes a new shape.
 * @param xLocation
 * 		The X-Location.
 * @param yLocation
 * 		The Y-Location
 * @param color
 * 		The color.
 */
Circle::Circle(int xLocation, int yLocation, const string& color) :
		Shape("Circle", xLocation, yLocation, color) {

	int diameter = Shape::GenerateRandomNumber(DIAMETER_MIN, DIAMETER_MAX);

	this->diameter = diameter;

	Shape::setArea(this->ComputeArea());
	Shape::setPerimeter(this->ComputePerimeter());
}

/**
 * The area of the circle
 * @return
 * 		The area of the circle.
 */
double Circle::ComputeArea() {
	double radius = this->diameter / 2;

	return (M_PI * radius * radius);
}

/**
 * The perimeter of the cirlce.
 * @return
 * 		The perimeter.
 */
double Circle::ComputePerimeter() {
	return (M_PI * this->diameter);
}

Circle::~Circle() {
	// TODO Auto-generated destructor stub
}

/**
 * Prints out the shape to the user.
 * @return
 * 		The vector containing the shape.
 */
vector<string> Circle::PrintShape() {

	vector<string> circleVector = Shape::PrintShape();
	string diameter = ("Diameter: " + Shape::IntToString(this->diameter));

	circleVector.push_back(diameter);

	return circleVector;
}

} /* namespace shapes */
