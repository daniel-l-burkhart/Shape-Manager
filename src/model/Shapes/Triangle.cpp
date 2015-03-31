/*
 * Triangle.cpp
 *
 *  Created on: Mar 24, 2015
 *      Author: Daniel
 */

#include "Triangle.h"
#include <cstdlib>
#include <iostream>

#include "Shape.h"
#include <iosfwd>
#include <sstream>

namespace model {

const int BASE_MAX = 31;
const int BASE_MIN = 19;

const int HEIGHT_MAX = 31;
const int HEIGHT_MIN = 19;

/**
 * The default constructor.
 */
Triangle::Triangle() {

	this->base = 0;
	this->height = 0;
}

/**
 * The constructor that makes the triangle.
 * @param xLocation
 * 		The X-Location.
 * @param yLocation
 * 		The Y-Location.
 * @param color
 * 		The color.
 */
Triangle::Triangle(int xLocation, int yLocation, const string& color) :
		Shape("Triangle", xLocation, yLocation, color) {

	int base = Shape::GenerateRandomNumber(BASE_MIN, BASE_MAX);
	int height = Shape::GenerateRandomNumber(HEIGHT_MIN, HEIGHT_MAX);

	this->base = base;
	this->height = height;

	Shape::setArea(this->ComputeArea());
	Shape::setPerimeter(this->ComputePerimeter());
}

/**
 * Computes the area of the triangle.
 * @return
 * 		The area of the triangle.
 */
double Triangle::ComputeArea() {
	double triangle = this->base * this->height;
	return (triangle / 2);

}

/**
 * Computes the perimeter of the triangle.
 * @return
 * 		The perimeter of the triangle.
 */
double Triangle::ComputePerimeter() {
	return this->base + this->height;
}

/**
 * Prints out the shape.
 * @return
 * 		The vector representation of the shape.
 */
vector<string> Triangle::PrintShape() {

	vector<string> triangleVector = Shape::PrintShape();


	string base = "Base: " + Shape::IntToString(this->base);

	string height = "Height: " + Shape::IntToString(this->height);

	triangleVector.push_back(base);
	triangleVector.push_back(height);

	return triangleVector;
}

/**
 * The destructor of the class.
 */
Triangle::~Triangle() {
	// TODO Auto-generated destructor stub
}

} /* namespace shapes */
