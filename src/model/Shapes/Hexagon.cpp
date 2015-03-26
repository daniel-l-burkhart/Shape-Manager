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

Hexagon::Hexagon(const string& color, int x, int y) :
		Shape("Hexagon", x, y, color) {

	int length = rand() % LENGTH_MAX + LENGTH_MIN;

	this->length = length;

	Shape::setPerimeter(this->Perimeter());
	Shape::setArea(this->Area());
}

double Hexagon::Perimeter() {
	return SIDES_OF_HEXAGON * this->length;
}

double Hexagon::Area() {
	double area = (AREA_LITERAL * sqrt(AREA_LITERAL) * this->length
			* this->length) / 2;
	return area;
}

Hexagon::~Hexagon() {
	// TODO Auto-generated destructor stub
}

} /* namespace shapes */
