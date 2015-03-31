/*
 * ShapeManagerController.h
 *
 *  Created on: Mar 24, 2015
 *      Author: Daniel
 */

#ifndef CONTROLLER_SHAPEMANAGERCONTROLLER_H_
#define CONTROLLER_SHAPEMANAGERCONTROLLER_H_
#include "ShapeCollection.h"
#include "Shape.h"

#include <vector>

using model::Shape;
using model::ShapeCollection;

namespace controller {

class ShapeManagerController {

private:
	ShapeCollection shapes;
public:
	ShapeManagerController();
	virtual ~ShapeManagerController();
	void GenerateShapes(int numberOfShapes);
	vector<Shape*> GetShapeList();
};

} /* namespace controller */

#endif /* CONTROLLER_SHAPEMANAGERCONTROLLER_H_ */
