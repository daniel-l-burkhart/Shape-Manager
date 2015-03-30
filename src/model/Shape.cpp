/*
 * Shape.cpp
 *
 *  Created on: Mar 24, 2015
 *      Author: Daniel
 */

#include "Shape.h"
#include <cstdlib>
#include <iomanip>
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

int Shape::GenerateRandomNumber(int min, int max) {

	return ((double) rand() / ((double) RAND_MAX + 1.0)) * (max - min + 1) + min;
}

vector<string> Shape::PrintShape() {

	vector<string> shapeDetails = vector<string>();

	string shapeType = "Shape: " + this->shapeType;

	string color = ("Color: " + this->color);

	string perimeterString = ("Perimeter: "
			+ this->doubleToString(this->perimeter));

	string areaString = ("Area: " + this->doubleToString(this->area));

	string position = "Position: " + Shape::intToString(this->xLocation) + ", "
			+ Shape::intToString(this->yLocation);

	shapeDetails.push_back(shapeType);
	shapeDetails.push_back(position);
	shapeDetails.push_back(color);
	shapeDetails.push_back(areaString);
	shapeDetails.push_back(perimeterString);

	return shapeDetails;

}

string Shape::intToString(int input) {
	string result;
	stringstream out;
	out << input;
	result = out.str();
	return result;
}

string Shape::doubleToString(double inputDouble) {

	string result;
	stringstream out;

	out << std::fixed << std::setprecision(2) << inputDouble;
	result = out.str();
	out.clear();
	return result;
}

Shape::~Shape() {
// TODO Auto-generated destructor stub
}

} /* namespace model */

