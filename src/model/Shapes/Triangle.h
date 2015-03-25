/*
 * Triangle.h
 *
 *  Created on: Mar 24, 2015
 *      Author: Daniel
 */

#ifndef MODEL_SHAPES_TRIANGLE_H_
#define MODEL_SHAPES_TRIANGLE_H_

#include <string>
using namespace std;

namespace shapes {

class Triangle: model::Shape {

private:
	int base;
	int height;

public:

	const int BASE_MAX = 31;
	const int BASE_MIN = 19;

	const int HEIGHT_MAX = 31;
	const int HEIGHT_MIN = 19;

	Triangle();
	Triangle(int xLocation, int yLocation, const string& color);

	virtual ~Triangle();
};

} /* namespace shapes */

#endif /* MODEL_SHAPES_TRIANGLE_H_ */
