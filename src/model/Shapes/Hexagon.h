/*
 * Hexagon.h
 *
 *  Created on: Mar 24, 2015
 *      Author: Daniel
 */

#ifndef MODEL_SHAPES_HEXAGON_H_
#define MODEL_SHAPES_HEXAGON_H_

#include<string>

#include "Shape.h"
using namespace std;

namespace model {

class Hexagon: public Shape {

private:

	int length;

public:

	Hexagon();

	Hexagon(int x, int y, const string& color);

	virtual ~Hexagon();

	double ComputeArea();
	double ComputePerimeter();
};

} /* namespace shapes */

#endif /* MODEL_SHAPES_HEXAGON_H_ */
