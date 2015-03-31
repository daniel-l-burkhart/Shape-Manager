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

/**
 * The default constructor.
 */
Rectangle::Rectangle() {

	this->width = 0;
	this->height = 0;

}

/**
 * The rectangle constructor that inherits from the shape class.
 * @param xLocation
 * 		The x-location of the shape.
 * @param yLocation
 * 		The y-location of the shape.
 * @param color
 * 		The color of the shape.
 */
Rectangle::Rectangle(int xLocation, int yLocation, const string& color) :
		Shape("Rectangle", xLocation, yLocation, color) {

	int width = Shape::GenerateRandomNumber(WIDTH_MIN, WIDTH_MAX);

	int height = Shape::GenerateRandomNumber(HEIGHT_MIN, HEIGHT_MAX);

	this->width = width;
	this->height = height;

	Shape::setArea(this->ComputeArea());
	Shape::setPerimeter(this->ComputePerimeter());

}

/**
 * The rectangle constructor that contains the
 * details of the square since the square
 * inherits the rectangle.
 * @param ID
 * 		The ID of the shape.
 * @param xLocation
 * 		The X-Location of the shape.
 * @param yLocation
 * 		The Y-Location of the shape.
 * @param color
 * 		The color of the shape.
 */
Rectangle::Rectangle(const string& ID, int xLocation, int yLocation,
		const string& color) :
		Shape(ID, xLocation, yLocation, color) {

	const int LENGTH_MAX = 36;
	const int LENGTH_MIN = 14;

	int side = Shape::GenerateRandomNumber(LENGTH_MIN, LENGTH_MAX);

	this->height = side;
	this->width = side;
}

/**
 * Computes the area of the rectangle.
 * @return
 * 		The area of the rectangle.
 */
double Rectangle::ComputeArea() {
	return (this->width * this->height);
}

/**
 * Computes the perimeter of the rectangle.
 * @return
 * 		The perimeter of the rectangle.
 */
double Rectangle::ComputePerimeter() {
	return (PERIMETER_LITERAL * (this->width + this->height));
}

/**
 * The destructor of the class.
 */
Rectangle::~Rectangle() {
	// TODO Auto-generated destructor stub
}

/**
 * Getter method for width of the shape.
 * @return
 * The width of the shape
 */
int Rectangle::getWidth() const {
	return width;
}

/**
 * The details of the Rectangle
 * @return
 * 		A vector of the rectangle details.
 */
vector<string> Rectangle::PrintShape() {

	vector<string> rectangleVector = Shape::PrintShape();
	string width = "Width: " + Shape::IntToString(this->width);

	string height = "Height: " + Shape::IntToString(this->height);

	rectangleVector.push_back(width);
	rectangleVector.push_back(height);

	return rectangleVector;
}

}

