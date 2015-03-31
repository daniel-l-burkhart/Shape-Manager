/*
 * Hexagon.cpp
 *
 *  Created on: Mar 24, 2015
 *      Author: Daniel
 */

#include <cmath>
#include <cstdlib>

#include "Shape.h"
#include "Hexagon.h"

namespace model {


const int LENGTH_MAX = 16;
const int LENGTH_MIN = 4;

const int SIDES_OF_HEXAGON = 6;
const int AREA_LITERAL = 3;

/**
 * The default constructor of the class.
 */
Hexagon::Hexagon() {

	this->length = 0;
}

/**
 * The second constructor that makes the shape
 * @param x
 * 		The x-location of the hexagon.
 * @param y
 * 		The y-location of the hexagon
 * @param color
 * 		The color of the hexagon.
 */
Hexagon::Hexagon(int x, int y, const string& color) :
		Shape("Hexagon", x, y, color) {

	int length = Shape::GenerateRandomNumber(LENGTH_MIN, LENGTH_MAX);

	this->length = length;

	Shape::setArea(this->ComputeArea());
	Shape::setPerimeter(this->ComputePerimeter());
}

/**
 * The destructor of the hexagon
 */
Hexagon::~Hexagon() {
	// TODO Auto-generated destructor stub
}

/**
 * Computes the area of the hexagon
 * @return
 * 		The area of the hexagon.
 */
double Hexagon::ComputeArea() {
	double area = (AREA_LITERAL * sqrt(AREA_LITERAL) * this->length
			* this->length) / 2;
	return area;
}

/**
 * Computes the perimeter of the hexagon.
 * @return
 * 		The perimeter of the hexagon.
 */
double Hexagon::ComputePerimeter() {
	return SIDES_OF_HEXAGON * this->length;
}

/**
 * Prints the details of the shape.
 * @return
 * 		A vector containing all the details of the hexagon.
 */
vector<string> Hexagon::PrintShape() {

	vector<string> hexagonVector = Shape::PrintShape();

	string length = "Length: " + Shape::IntToString(this->length);

	hexagonVector.push_back(length);

	return hexagonVector;
}



} /* namespace shapes */
