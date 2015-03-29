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

	int diameter = rand() % DIAMETER_MAX + DIAMETER_MIN;

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
	vector<string> circle = vector<string>();
	string circleString = Shape::Print();
	string diameter = ("Diameter: " + this->diameter);
	circle.push_back(circleString);
	circle.push_back(diameter);

	return circle;
}

} /* namespace shapes */
