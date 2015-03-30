/*
 * Triangle.cpp
 *
 *  Created on: Mar 24, 2015
 *      Author: Daniel
 */

#include "Triangle.h"
#include <cstdlib>
#include <iostream>

#include "Shape.h"
#include <iosfwd>
#include <sstream>

namespace model {

const int BASE_MAX = 31;
const int BASE_MIN = 19;

const int HEIGHT_MAX = 31;
const int HEIGHT_MIN = 19;

Triangle::Triangle() {

	this->base = 0;
	this->height = 0;
}

Triangle::Triangle(int xLocation, int yLocation, const string& color) :
		Shape("Triangle", xLocation, yLocation, color) {

	int base = Shape::GenerateRandomNumber(BASE_MIN, BASE_MAX);
	int height = Shape::GenerateRandomNumber(HEIGHT_MIN, HEIGHT_MAX);

	this->base = base;
	this->height = height;

	Shape::setArea(this->ComputeArea());
	Shape::setPerimeter(this->ComputePerimeter());
}

double Triangle::ComputeArea() {
	double triangle = this->base * this->height;
	return (triangle / 2);

}

double Triangle::ComputePerimeter() {
	return this->base + this->height;
}

vector<string> Triangle::PrintShape() {

	vector<string> triangleString = Shape::PrintShape();


	string base = "Base: " + Shape::intToString(this->base);

	string height = "Height: " + Shape::intToString(this->height);

	triangleString.push_back(base);
	triangleString.push_back(height);

	return triangleString;
}


Triangle::~Triangle() {
	// TODO Auto-generated destructor stub
}

} /* namespace shapes */
