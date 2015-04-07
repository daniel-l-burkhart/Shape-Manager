/*
 * ShapeManagerUserInterface.h
 *
 *  Created on: Mar 24, 2015
 *      Author: Daniel
 */

#ifndef VIEW_SHAPEMANAGERUSERINTERFACE_H_
#define VIEW_SHAPEMANAGERUSERINTERFACE_H_
#include "ShapeManagerController.h"

using controller::ShapeManagerController;

namespace view {

class ShapeManagerUserInterface {

private:
	ShapeManagerController controller;

	void repeatMenuSystem();
	void printOutDetails(vector<string> currentShape);

public:
	ShapeManagerUserInterface();
	virtual ~ShapeManagerUserInterface();
	void MenuSystem();
	void GenerateShapeList(int randomShapes);
	void GenerateShapesCommandLine(const string& inputString);
	void PrintShapeList();

};

} /* namespace view */

#endif /* VIEW_SHAPEMANAGERUSERINTERFACE_H_ */
