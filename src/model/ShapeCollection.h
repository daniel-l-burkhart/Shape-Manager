/*
 * ShapeCollection.h
 *
 *  Created on: Mar 26, 2015
 *      Author: dburkha1
 */

#ifndef MODEL_SHAPECOLLECTION_H_
#define MODEL_SHAPECOLLECTION_H_

#include <vector>

#include "Shape.h"
namespace model {

/*
 *
 */
class ShapeCollection {
private:

	vector<Shape*> shapes;

	int randomShape;
	int randXLocation;
	int randYLocation;
	int colorNumber;
	string randColor;

	void generateRandomValues();
	void generateRandomColor();

	void generateRandomShapes();



public:
	ShapeCollection();

	virtual ~ShapeCollection();
	void InsertShape(Shape *currentShape);
	void CreateShapeList(int numberOfShapes);
	const vector<Shape*>& getShapes() const;


	int GenerateRandomNumber(int min, int max);

};

} /* namespace model */

#endif /* MODEL_SHAPECOLLECTION_H_ */
