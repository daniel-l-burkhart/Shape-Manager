/*
 * Hexagon.cpp
 *
 *  Created on: Mar 24, 2015
 *      Author: Daniel
 */

#include "Hexagon.h"
#include <cmath>
#include <cstdlib>

#include "Shape.h"
namespace model {

const int LENGTH_MAX = 16;
const int LENGTH_MIN = 4;

const int SIDES_OF_HEXAGON = 6;
const int AREA_LITERAL = 3;

Hexagon::Hexagon() {

	this->length = 0;
}

Hexagon::Hexagon(int x, int y, const string& color) :
		Shape("Hexagon", x, y, color) {

	int length = Shape::GenerateRandomNumber(LENGTH_MIN, LENGTH_MAX);

	this->length = length;

	Shape::setArea(this->ComputeArea());
	Shape::setPerimeter(this->ComputePerimeter());
}

Hexagon::~Hexagon() {
	// TODO Auto-generated destructor stub
}

double Hexagon::ComputeArea() {
	double area = (AREA_LITERAL * sqrt(AREA_LITERAL) * this->length
			* this->length) / 2;
	return area;
}

vector<string> Hexagon::PrintShape() {

	vector<string> hexagonString = Shape::PrintShape();

	string length = "Length: " + Shape::intToString(this->length);

	hexagonString.push_back(length);

	return hexagonString;
}

double Hexagon::ComputePerimeter() {
	return SIDES_OF_HEXAGON * this->length;
}

} /* namespace shapes */
