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

	double Perimeter();
	double Area();

public:



	Circle();

	Circle(int xLocation, int yLocation, const string& color);

	virtual ~Circle();

};

} /* namespace shapes */

#endif /* MODEL_SHAPES_CIRCLE_H_ */
