/*
 * Triangle.cpp
 *
 *  Created on: Mar 24, 2015
 *      Author: Daniel
 */

#include "Triangle.h"
#include <cstdlib>

#include "Shape.h"
namespace model {

const int BASE_MAX = 31;
const int BASE_MIN = 19;

const int HEIGHT_MAX = 31;
const int HEIGHT_MIN = 19;

Triangle::Triangle() {

	this->base = 0;
	this->height = 0;
}

Triangle::Triangle(int xLocation, int yLocation, const string& color) :
		Shape("Triangle", xLocation, yLocation, color) {

	int base = rand() % BASE_MAX + BASE_MIN;
	int height = rand() % HEIGHT_MAX + HEIGHT_MIN;

	this->base = base;
	this->height = height;

	Shape::setArea(this->ComputeArea());
	Shape::setPerimeter(this->ComputePerimeter());
}

double Triangle::ComputeArea() {
	double triangle = this->base * this->height;
	return (triangle / 2);

}

double Triangle::ComputePerimeter() {
	return this->base + this->height;
}

string Triangle::Print() {
	string resultString = Shape::Print();

	string base = "Base: " + this->base;
	string endLine = "\r\n";
	string height = "Height: " + this->height;

	resultString += base;
	resultString += endLine;
	resultString += height;
	resultString += endLine;

	return resultString;
}

Triangle::~Triangle() {
	// TODO Auto-generated destructor stub
}

} /* namespace shapes */
