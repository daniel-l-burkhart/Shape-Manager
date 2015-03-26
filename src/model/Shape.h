/*
 * Shape.h
 *
 *  Created on: Mar 24, 2015
 *      Author: Daniel
 */

#ifndef MODEL_SHAPE_H_
#define MODEL_SHAPE_H_

#include <string>
using namespace std;

namespace model {

class Shape {

private:

	string shapeType;
	int xLocation;
	int yLocation;
	string color;
	double area;
	double perimeter;

public:
	Shape();
	Shape(const string& shapeType, int xLocation, int yLocation, const string& color);
	virtual ~Shape();
	double getArea() const;
	void setArea(double area);
	const string& getColor() const;
	double getPerimeter() const;
	void setPerimeter(double perimeter);
	const string& getShapeType() const;
	int getXLocation() const;
	int getYLocation() const;
};

} /* namespace model */

#endif /* MODEL_SHAPE_H_ */
