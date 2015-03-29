/*
 * Shape.h
 *
 *  Created on: Mar 24, 2015
 *      Author: Daniel
 */

#ifndef MODEL_SHAPE_H_
#define MODEL_SHAPE_H_

#include "Shape.h"
#include <iosfwd>
#include <string>
#include <vector>

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

	string Print();

	virtual vector<string> PrintShape() = 0;

	virtual double ComputeArea() = 0;
	virtual double ComputePerimeter() = 0;
};

} /* namespace model */

#endif /* MODEL_SHAPE_H_ */
