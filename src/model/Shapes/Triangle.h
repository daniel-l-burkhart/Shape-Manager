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

	string intToString(int input);

public:

	double ComputeArea();
	double ComputePerimeter();

	Triangle();
	Triangle(int xLocation, int yLocation, const string& color);


	virtual ~Triangle();

	vector<string> PrintShape();
};

} /* namespace shapes */

#endif /* MODEL_SHAPES_TRIANGLE_H_ */
