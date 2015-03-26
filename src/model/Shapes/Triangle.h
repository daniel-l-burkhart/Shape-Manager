/*
 * Triangle.h
 *
 *  Created on: Mar 24, 2015
 *      Author: Daniel
 */

#ifndef MODEL_SHAPES_TRIANGLE_H_
#define MODEL_SHAPES_TRIANGLE_H_

#include <string>

#include "Shape.h"
using namespace std;

namespace model {

class Triangle: public Shape {

private:
	int base;
	int height;

	double Perimeter();
	double Area();

public:



	Triangle();
	Triangle(int xLocation, int yLocation, const string& color);

	virtual ~Triangle();
};

} /* namespace shapes */

#endif /* MODEL_SHAPES_TRIANGLE_H_ */
