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

	int width = rand() % WIDTH_MAX + WIDTH_MIN;

	int height = rand() % HEIGHT_MAX + HEIGHT_MIN;

	this->width = width;
	this->height = height;

	Shape::setArea(this->ComputeArea());
	Shape::setPerimeter(this->ComputePerimeter());

}

Rectangle::Rectangle(const string& ID, int xLocation, int yLocation,
		const string& color) :
		Shape(ID, xLocation, yLocation, color) {

	this->height = 0;
	this->width = 0;
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

string Rectangle::Print() {
	string rectangleString = Shape::Print();
	string width = "Width: " + this->width;
	string endLine = "\r\n";
	string height = "Height: " + this->height;
	rectangleString += (width);
	rectangleString += endLine;
	rectangleString += height;
	rectangleString += endLine;
	return rectangleString;
}

}

