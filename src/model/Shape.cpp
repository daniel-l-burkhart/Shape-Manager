/*
 * Shape.cpp
 *
 *  Created on: Mar 24, 2015
 *      Author: Daniel
 */

#include "Shape.h"
#include <cstdlib>
#include <iosfwd>
#include <ostream>
#include <iostream>
#include <string>
#include <sstream>

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
	string shapeString;
	string shapeType = "Shape: " + this->shapeType;

	string color = ("Color: " + this->color);

	this->yLocation;

	std::ostringstream strs;
	strs << this->perimeter;
	std::string str = strs.str();

	string Perimeter = ("Perimeter: " + str);

	std::ostringstream stream;
	stream << this->area;
	std::string areaString = stream.str();

	std::ostringstream yLocation;
	yLocation << this->yLocation;
	string yLocationString = yLocation.str();

	string Area = ("Area: " + areaString);

	std::ostringstream xString;
	xString << this->xLocation;
	string xLocationString = xString.str();

	string xPosition = "Position: " + xLocationString + ", ";

	string endLine = "\r\n";

	shapeString += (shapeType + endLine + xPosition + yLocationString + endLine
			+ color + endLine + Area + endLine + Perimeter);

	return shapeString;

}

Shape::~Shape() {
// TODO Auto-generated destructor stub
}

} /* namespace model */

