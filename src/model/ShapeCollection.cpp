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

/**
 * Constructor of the collection class.
 */
ShapeCollection::ShapeCollection() {

	this->shapes = vector<Shape*>();

	this->randomShape = 0;
	this->randXLocation = 0;
	this->randYLocation = 0;
	this->colorNumber = 0;
}

/**
 *	Destructor of the collection class.
 */
ShapeCollection::~ShapeCollection() {
	this->clearList();
}

/**
 * Inserts shape into the list of random shapes.
 * @param currentShape
 * 		The shape being inserted into the list.
 */
void ShapeCollection::InsertShape(Shape* currentShape) {

	this->shapes.push_back(currentShape);
}

/**
 * Generates the random values that create the random shapes.
 */
void ShapeCollection::generateRandomValues() {

	this->randomShape = this->GenerateRandomNumber(1, 5);
	this->randXLocation = this->GenerateRandomNumber(0, 100);
	this->randYLocation = this->GenerateRandomNumber(0, 100);
	this->colorNumber = this->GenerateRandomNumber(1, 5);

}

/**
 * Method that clears out the vector of Shape pointers,
 * deletes the pointers, and sets it to 0.
 */
void ShapeCollection::clearList() {
	for (vector<Shape*>::size_type i = 0; i < this->shapes.size(); i++) {
		delete this->shapes[i];
		this->shapes[i] = 0;
	}
	this->shapes.clear();
}

/**
 * Generates a random number based off the min and max of the range.
 * @param min
 * 		the minimum value of the range.
 * @param max
 * 		the maximum value of the range.
 * @return
 * 		A "random" number.
 */
int ShapeCollection::GenerateRandomNumber(int min, int max) {
	return ((double) rand() / ((double) RAND_MAX + 1.0)) * (max - min + 1) + min;
}

/**
 * Generates a random color.
 */
void ShapeCollection::generateRandomColor() {

	switch (this->colorNumber) {
	case 1: {
		this->randColor = "Red";
		break;
	}
	case 2: {
		this->randColor = "Green";
		break;
	}
	case 3: {
		this->randColor = "Blue";
		break;
	}
	case 4: {
		this->randColor = "Yellow";
		break;
	}
	case 5: {
		this->randColor = "Purple";
		break;
	}
	}

}

/**
 * Generates the random shapes.
 */
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

/**
 * Returns the shape collection.
 * @return
 * 		Returns the lsit of shapes.
 */
const vector<Shape*>& ShapeCollection::getShapes() const {
	return this->shapes;
}

/**
 * Creates the shape list.
 * @param numberOfShapes
 * 		The number of shapes.
 */
void ShapeCollection::CreateShapeList(int numberOfShapes) {

	this->clearList();

	for (int i = 0; i < numberOfShapes; i++) {

		this->generateRandomValues();

		this->generateRandomColor();

		this->generateRandomShapes();
	}
}

} /* namespace model */
