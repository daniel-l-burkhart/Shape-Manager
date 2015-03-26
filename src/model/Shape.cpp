/*
 * Shape.cpp
 *
 *  Created on: Mar 24, 2015
 *      Author: Daniel
 */

#include "Shape.h"
#include <ostream>
#include <iostream>

using std::endl;

namespace model {

Shape::Shape() {

	this->xLocation = 0;
	this->yLocation = 0;
	this->area = 0;
	this->perimeter = 0;

}

Shape::Shape(const string& shapeType, int xLocation, int yLocation,
		const string& color) {

	this->shapeType = shapeType;
	this->xLocation = xLocation;
	this->yLocation = yLocation;
	this->color = color;

	this->area = 0;
	this->perimeter = 0;
}

double Shape::getArea() const {
	return area;
}

void Shape::setArea(double area) {
	this->area = area;
}

const string& Shape::getColor() const {
	return color;
}

double Shape::getPerimeter() const {
	return perimeter;
}

void Shape::setPerimeter(double perimeter) {
	this->perimeter = perimeter;
}

const string& Shape::getShapeType() const {
	return shapeType;
}

int Shape::getXLocation() const {
	return xLocation;
}

int Shape::getYLocation() const {
	return yLocation;
}

string Shape::Print() {

/*	return "Shape: " << this->shapeType << endl << "Position: "
			<< this->xLocation << ", " << this->yLocation << endl << "Area: "
			<< setPrecision(2) << this->area << endl << "Perimeter: "
			<< setPrecision(2) << this->perimeter + endl;*/

	return "";

}

Shape::~Shape() {
// TODO Auto-generated destructor stub
}

} /* namespace model */

