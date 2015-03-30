/*
 * Circle.cpp
 *
 *  Created on: Mar 24, 2015
 *      Author: Daniel
 */

#include "Circle.h"

#include "Shape.h"
#define _USE_MATH_DEFINES // for C++
#include <cmath>
#include <cstdlib>

namespace model {

const int DIAMETER_MAX = 26;
const int DIAMETER_MIN = 14;

Circle::Circle() {

	this->diameter = 0;

}

Circle::Circle(int xLocation, int yLocation, const string& color) :
		Shape("Circle", xLocation, yLocation, color) {

	int diameter = Shape::GenerateRandomNumber(DIAMETER_MIN, DIAMETER_MAX);

	this->diameter = diameter;

	Shape::setArea(this->ComputeArea());
	Shape::setPerimeter(this->ComputePerimeter());
}

double Circle::ComputeArea() {
	double radius = this->diameter / 2;

	return (M_PI * radius * radius);
}

double Circle::ComputePerimeter() {
	return (M_PI * this->diameter);
}

Circle::~Circle() {
	// TODO Auto-generated destructor stub
}

vector<string> Circle::PrintShape() {

	vector<string> circleString = Shape::PrintShape();
	string diameter = ("Diameter: " + Shape::intToString(this->diameter));

	circleString.push_back(diameter);

	return circleString;
}

} /* namespace shapes */
