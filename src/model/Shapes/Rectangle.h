/*
 * Rectangle.h
 *
 *  Created on: Mar 24, 2015
 *      Author: Daniel
 */

#ifndef MODEL_SHAPES_RECTANGLE_H_
#define MODEL_SHAPES_RECTANGLE_H_

#include <string>
using namespace std;

namespace shapes {

class Rectangle : public model::Shape{

private:

int width;
int height;

public:

	const int HEIGHT_MAX = 21;
	const int WIDTH_MAX = 21;
	const int WIDTH_MIN = 9;
	const int HEIGHT_MIN = 9;

	Rectangle();
	Rectangle(int xLocation, int yLocation, const string& color);
	virtual ~Rectangle();
};

} /* namespace shapes */

#endif /* MODEL_SHAPES_RECTANGLE_H_ */
