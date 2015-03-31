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

/**
 * The constructor of the class.
 */
Shape::Shape() {

	this->xLocation = 0;
	this->yLocation = 0;
	this->area = 0;
	this->perimeter = 0;

}

/**
 * The constructor of the class that instantiates a new shape.
 * @param shapeType
 * 		The type of shape it is.
 * @param xLocation
 * 		The X-Location of the shape.
 * @param yLocation
 * 		The Y-Location of the shape.
 * @param color
 * 		The color of the shape.
 */
Shape::Shape(const string& shapeType, int xLocation, int yLocation,
		const string& color) {

	this->shapeType = shapeType;
	this->xLocation = xLocation;
	this->yLocation = yLocation;
	this->color = color;

	this->area = 0;
	this->perimeter = 0;
}

/**
 * Sets the area of the shape
 * @param area
 * 		The area variable
 */
void Shape::setArea(double area) {
	this->area = area;
}

/**
 * Sets the perimeter of the shape
 * @param perimeter
 * 		The perimeter of the shape.
 */
void Shape::setPerimeter(double perimeter) {
	this->perimeter = perimeter;
}

/**
 * Function to generate random numbers to be used by the shapes to randomize the various attributes.
 * @param min
 * 		The min of the range.
 * @param max
 * 		The max of the range.
 * @return
 * 		A "random" number.
 */
int Shape::GenerateRandomNumber(int min, int max) {

	return ((double) rand() / ((double) RAND_MAX + 1.0)) * (max - min + 1) + min;
}

/**
 * Vector that stores all the attributes of the shape to be printed out to the user.
 * @return
 * 		A string vector storing the information
 */
vector<string> Shape::PrintShape() {

	vector<string> shapeDetails = vector<string>();

	string shapeType = "Shape: " + this->shapeType;

	string color = ("Color: " + this->color);

	string perimeterString = ("Perimeter: "
			+ this->doubleToString(this->perimeter));

	string areaString = ("Area: " + this->doubleToString(this->area));

	string position = "Position: " + Shape::IntToString(this->xLocation) + ", "
			+ Shape::IntToString(this->yLocation);

	shapeDetails.push_back(shapeType);
	shapeDetails.push_back(position);
	shapeDetails.push_back(color);
	shapeDetails.push_back(areaString);
	shapeDetails.push_back(perimeterString);

	return shapeDetails;

}

/**
 * Converts an int to a string
 * @param input
 * 		The int input
 * @return
 * 		A string representation of the integer input.
 */
string Shape::IntToString(int input) {
	string result;
	stringstream out;
	out << input;
	result = out.str();
	return result;
}

/**
 * Converts a double to a string
 * @param inputDouble
 * 		The double input
 * @return
 * 		A string representation of the double input.
 */
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

