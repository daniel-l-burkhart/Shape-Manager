/*
 * Rectangle.h
 *
 *  Created on: Mar 24, 2015
 *      Author: Daniel
 */

#ifndef MODEL_SHAPES_RECTANGLE_H_
#define MODEL_SHAPES_RECTANGLE_H_

#include <string>

#include "Shape.h"
using namespace std;


namespace model {

class Rectangle : public Shape{

private:

int width;
int height;

public:

	double ComputeArea();
	double ComputePerimeter();

	Rectangle();
	Rectangle(int xLocation, int yLocation, const string& color);
	Rectangle(const string& ID, int xLocation, int yLocation, const string& color);
	virtual ~Rectangle();

	vector<string> PrintShape();
};

} /* namespace shapes */

#endif /* MODEL_SHAPES_RECTANGLE_H_ */
