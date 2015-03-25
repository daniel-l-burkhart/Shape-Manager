/*
 * Hexagon.cpp
 *
 *  Created on: Mar 24, 2015
 *      Author: Daniel
 */

#include "Hexagon.h"

namespace shapes {

Hexagon::Hexagon() {

	this->length = 0;
}

Hexagon::Hexagon(const string& color, int x, int y) :
		Shape("Hexagon", x, y, color) {

	int length = rand() % LENGTH_MAX + LENGTH_MIN;

	this->length = length;
}

Hexagon::~Hexagon() {
	// TODO Auto-generated destructor stub
}

} /* namespace shapes */
