/*
 * Hexagon.h
 *
 *  Created on: Mar 24, 2015
 *      Author: Daniel
 */

#ifndef MODEL_SHAPES_HEXAGON_H_
#define MODEL_SHAPES_HEXAGON_H_

#include<string>
using namespace std;

namespace shapes {

class Hexagon: public model::Shape{

private:

int length;

public:

const int LENGTH_MAX = 16;
const int LENGTH_MIN = 4;

	Hexagon();

	Hexagon(const string& color, int x, int y);

	virtual ~Hexagon();
};

} /* namespace shapes */

#endif /* MODEL_SHAPES_HEXAGON_H_ */
