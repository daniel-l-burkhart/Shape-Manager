/*
 * ShapeManagerController.cpp
 *
 *  Created on: Mar 24, 2015
 *      Author: Daniel
 */

#include "ShapeManagerController.h"

namespace controller {

/**
 * Constructor of the class.
 */
ShapeManagerController::ShapeManagerController() {
	// TODO Auto-generated constructor stub

}

/**
 * Destructor of the class
 */
ShapeManagerController::~ShapeManagerController() {
	// TODO Auto-generated destructor stub
}

/**
 * Generates random shapes with numbers specified by the user.
 * @param numberOfShapes
 * The number of the shapes.
 */
void ShapeManagerController::GenerateShapes(int numberOfShapes) {
	this->shapes.CreateShapeList(numberOfShapes);
}

/**
 * Gets the vector of random shapes
 * @return
 * A vector containing the shapes.
 */
vector<Shape*> ShapeManagerController::GetShapeList() {
	return this->shapes.getShapes();
}

} /* namespace controller */


