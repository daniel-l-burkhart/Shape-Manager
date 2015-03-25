/*
 * Circle.h
 *
 *  Created on: Mar 24, 2015
 *      Author: Daniel
 */

#ifndef MODEL_SHAPES_CIRCLE_H_
#define MODEL_SHAPES_CIRCLE_H_

#include <string>
using namespace std;

namespace shapes {

class Circle: public model::Shape {

private:
	int diameter;

public:

	const int DIAMETER_MAX = 26;
	const int DIAMETER_MIN = 14;

	Circle();

	Circle(int xLocation, int yLocation, const string& color);

	virtual ~Circle();

};

} /* namespace shapes */

#endif /* MODEL_SHAPES_CIRCLE_H_ */
