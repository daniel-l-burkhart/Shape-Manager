/*
 * Shape.cpp
 *
 *  Created on: Mar 24, 2015
 *      Author: Daniel
 */

#include "Shape.h"

namespace model {

Shape::Shape() {

	this->xLocation = 0;
	this->yLocation = 0;
	this->area = 0;
	this->perimeter = 0;

}

Shape::Shape(const string& shapeType, int xLocation, int yLocation, const string& color) {

	this->shapeType = shapeType;
	this->xLocation = xLocation;
	this->yLocation = yLocation;
	this->color = color;

	this->area = 0;
	this->perimeter = 0;
}

Shape::~Shape() {
	// TODO Auto-generated destructor stub
}

} /* namespace model */
