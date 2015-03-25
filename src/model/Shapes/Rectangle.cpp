/*
 * Rectangle.cpp
 *
 *  Created on: Mar 24, 2015
 *      Author: Daniel
 */

#include "Rectangle.h"
#include <cstdlib>

namespace shapes {

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
}

Rectangle::~Rectangle() {
	// TODO Auto-generated destructor stub
}

} /* namespace shapes */
