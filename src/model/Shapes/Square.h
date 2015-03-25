/*
 * Square.h
 *
 *  Created on: Mar 24, 2015
 *      Author: Daniel
 */

#ifndef MODEL_SHAPES_SQUARE_H_
#define MODEL_SHAPES_SQUARE_H_

#include <string>
using namespace std;

namespace shapes {

class Square : public model::Shape {

private:
	int length;
public:

	const int LENGTH_MAX = 36;
	const int LENGTH_MIN = 14;

	Square();
	Square(int xLocation, int yLocation, const string& color);
	virtual ~Square();
};

} /* namespace shapes */

#endif /* MODEL_SHAPES_SQUARE_H_ */
