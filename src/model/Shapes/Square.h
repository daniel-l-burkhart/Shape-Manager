/*
 * Square.h
 *
 *  Created on: Mar 24, 2015
 *      Author: Daniel
 */

#ifndef MODEL_SHAPES_SQUARE_H_
#define MODEL_SHAPES_SQUARE_H_

#include <string>

#include "Shape.h"

#include "Rectangle.h"
using namespace std;

namespace model {

class Square : public Rectangle {

public:


	Square();
	Square(int xLocation, int yLocation, const string& color);
	virtual ~Square();

	vector<string> PrintShape();
};

} /* namespace shapes */

#endif /* MODEL_SHAPES_SQUARE_H_ */
