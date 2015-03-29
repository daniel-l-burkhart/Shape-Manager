/*
 * Circle.h
 *
 *  Created on: Mar 24, 2015
 *      Author: Daniel
 */

#ifndef MODEL_SHAPES_CIRCLE_H_
#define MODEL_SHAPES_CIRCLE_H_


#include <string>

#include "Shape.h"
using namespace std;


namespace model {

class Circle: public Shape {

private:
	int diameter;

public:

	double ComputeArea();
	double ComputePerimeter();

	Circle();

	Circle(int xLocation, int yLocation, const string& color);

	virtual ~Circle();

	string Print();

};

} /* namespace shapes */

#endif /* MODEL_SHAPES_CIRCLE_H_ */
