/*
 * ShapeCollection.cpp
 *
 *  Created on: Mar 26, 2015
 *      Author: dburkha1
 */

#include "ShapeCollection.h"
#include "Shapes/Circle.h"
#include "Shapes/Hexagon.h"
#include "Shapes/Rectangle.h"
#include "Shapes/Square.h"
#include "Shapes/Triangle.h"
#include "Shape.h"

#include <vector>
#include <iomanip>
#include <cstdlib>
#include <string>

namespace model {

ShapeCollection::ShapeCollection() {

	this->shapes = vector<Shape*>();

	this->randomShape = 0;
	this->randXLocation = 0;
	this->randYLocation = 0;
	this->colorNumber = 0;
}

ShapeCollection::~ShapeCollection() {
	for (vector<Shape*>::size_type i = 0; i < this->shapes.size(); i++) {
		delete this->shapes[i];
		this->shapes[i] = 0;
	}
}

void ShapeCollection::InsertShape(Shape* currentShape) {

	this->shapes.push_back(currentShape);
}

static int randomValue(){
	int randomNumber = rand();
	return randomNumber;
}

void ShapeCollection::generateRandomValues() {


	this->randomShape = randomValue() % 1 + 5;

	this->randXLocation = randomValue() % 1 + 360;

	this->randYLocation = randomValue() % 1 + 360;

	this->colorNumber = randomValue() % 1 + 4;

}

void ShapeCollection::generateRandomColor() {

	switch (this->colorNumber) {
	case 1: {
		this->randColor = "Red";
		break;
	}
	case 2: {
		this->randColor = "Blue";
		break;
	}
	case 3: {
		this->randColor = "Yellow";
		break;
	}
	case 4: {
		this->randColor = "Purple";
		break;
	}
	}

}

void ShapeCollection::generateRandomShapes() {

	switch (this->randomShape) {
	case 1: {
		Circle* circle = new Circle(this->randXLocation, this->randYLocation,
				this->randColor);
		this->InsertShape(circle);
		break;
	}
	case 2: {
		Hexagon* pHexagon = new Hexagon(this->randXLocation,
				this->randYLocation, this->randColor);
		this->InsertShape(pHexagon);
		break;
	}
	case 3: {
		Rectangle* pRectangle = new Rectangle(this->randXLocation,
				this->randYLocation, this->randColor);
		this->InsertShape(pRectangle);
		break;
	}
	case 4: {
		Square* pSquare = new Square(this->randXLocation, this->randYLocation,
				this->randColor);
		this->InsertShape(pSquare);
		break;
	}
	case 5: {
		Triangle* pTriangle = new Triangle(this->randXLocation,
				this->randYLocation, this->randColor);
		this->InsertShape(pTriangle);
		break;
	}
	}

}

const vector<Shape*>& ShapeCollection::getShapes() const {
	return this->shapes;
}

void ShapeCollection::CreateShapeList(int numberOfShapes) {
	srand(time(0));
	for (int i = 0; i < numberOfShapes; i++) {

		this->generateRandomValues();

		this->generateRandomColor();

		this->generateRandomShapes();
	}
}

/*vector<string> ShapeCollection::Print() {

	for (vector<string>::size_type i = 0; i < this->shapes.size(); i++) {

	}

}*/

} /* namespace model */
