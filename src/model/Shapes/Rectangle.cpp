/*
 * Rectangle.cpp
 *
 *  Created on: Mar 24, 2015
 *      Author: Daniel
 */

#include "Rectangle.h"
#include <cstdlib>

#include "Shape.h"
namespace model {

const int HEIGHT_MAX = 21;
const int WIDTH_MAX = 21;
const int WIDTH_MIN = 9;
const int HEIGHT_MIN = 9;

const int PERIMETER_LITERAL = 2;

Rectangle::Rectangle() {

	this->width = 0;
	this->height = 0;

}

Rectangle::Rectangle(int xLocation, int yLocation, const string& color) :
		Shape("Rectangle", xLocation, yLocation, color) {

	int width = Shape::GenerateRandomNumber(WIDTH_MIN, WIDTH_MAX);

	int height = Shape::GenerateRandomNumber(HEIGHT_MIN, HEIGHT_MAX);

	this->width = width;
	this->height = height;

	Shape::setArea(this->ComputeArea());
	Shape::setPerimeter(this->ComputePerimeter());

}

Rectangle::Rectangle(const string& ID, int xLocation, int yLocation,
		const string& color) :
		Shape(ID, xLocation, yLocation, color) {

	const int LENGTH_MAX = 36;
	const int LENGTH_MIN = 14;

	int side = Shape::GenerateRandomNumber(LENGTH_MIN, LENGTH_MAX);

	this->height = side;
	this->width = side;
}

double Rectangle::ComputeArea() {
	return (this->width * this->height);
}

double Rectangle::ComputePerimeter() {
	return (PERIMETER_LITERAL * (this->width + this->height));
}

Rectangle::~Rectangle() {
	// TODO Auto-generated destructor stub
}

int Rectangle::getWidth() const {
	return width;
}

vector<string> Rectangle::PrintShape() {

	vector<string> rectangleString = Shape::PrintShape();
	string width = "Width: " + Shape::intToString(this->width);

	string height = "Height: " + Shape::intToString(this->height);

	rectangleString.push_back(width);
	rectangleString.push_back(height);

	return rectangleString;
}

}

