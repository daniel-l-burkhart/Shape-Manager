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

class Hexagon: public Shape{

private:

int length;

double Perimeter();
double Area();

public:

	Hexagon();

	Hexagon(const string& color, int x, int y);

	virtual ~Hexagon();
};

} /* namespace shapes */

#endif /* MODEL_SHAPES_HEXAGON_H_ */
