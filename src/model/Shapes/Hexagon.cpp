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

	int length = rand() % LENGTH_MAX + LENGTH_MIN;

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
	vector<string> hexagon = vector<string>();
	string hexagonString = Shape::Print();

	string length = "Length: " + this->length;

	hexagon.push_back(hexagonString);
	hexagon.push_back(length);


	return hexagon;
}

double Hexagon::ComputePerimeter() {
	return SIDES_OF_HEXAGON * this->length;
}

} /* namespace shapes */
