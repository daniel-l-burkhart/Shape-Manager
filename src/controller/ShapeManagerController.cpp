/*
 * ShapeManagerController.cpp
 *
 *  Created on: Mar 24, 2015
 *      Author: Daniel
 */

#include "ShapeManagerController.h"

namespace controller {

ShapeManagerController::ShapeManagerController() {
	// TODO Auto-generated constructor stub

}

ShapeManagerController::~ShapeManagerController() {
	// TODO Auto-generated destructor stub
}


void ShapeManagerController::GenerateShapes(int numberOfShapes) {
	this->shapes.CreateShapeList(numberOfShapes);
}

vector<Shape*> ShapeManagerController::GetShapeList() {
	return this->shapes.getShapes();
}

} /* namespace controller */


