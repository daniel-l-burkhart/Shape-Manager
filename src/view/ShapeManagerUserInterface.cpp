/*
 * ShapeManagerUserInterface.cpp
 *
 *  Created on: Mar 24, 2015
 *      Author: Daniel
 */

#include "ShapeManagerUserInterface.h"
#include "ShapeManagerController.h"
#include <iostream>
#include <string>

#include "Shape.h"
#include <cstdlib>
#include <vector>

using namespace std;
namespace view {

ShapeManagerUserInterface::ShapeManagerUserInterface() {
	// TODO Auto-generated constructor stub

}

ShapeManagerUserInterface::~ShapeManagerUserInterface() {
	// TODO Auto-generated destructor stub
}

void ShapeManagerUserInterface::repeatMenuSystem() {
	string response;

	cout << "Press 'S' to generate more shapes or 'Q' to quit." << endl << ">";
	cin >> response;

	while (response.length() > 1) {
		cout << "I'm sorry. That input is invalid. Please try again." << endl;
		cin >> response;
	}
	char selection = response[0];
	selection = tolower(selection);
	switch (selection) {
	case 's': {
		this->MenuSystem();
		break;
	}
	case 'q': {
		exit(0);
		break;
	}
	default:
		cout << "Invalid input. Please try again." << endl;
		this->repeatMenuSystem();
	}
}

void ShapeManagerUserInterface::MenuSystem() {

	int numberOfShapes;

	cout << "Please enter the number of shapes that you would like to generate"
			<< endl << ">";


    cin >> numberOfShapes;
    while(std::cin.fail())
    {
        cin.clear();
        cin.ignore();
        cout << "Please enter a valid number." << endl;
        cin >> numberOfShapes;
    }

	this->GenerateShapeList(numberOfShapes);
	this->PrintShapeList();

	this->repeatMenuSystem();
}

void ShapeManagerUserInterface::GenerateShapeList(int randomShapes) {
	this->controller.GenerateShapes(randomShapes);
}

void ShapeManagerUserInterface::printOutDetails(vector<string> currentShape) {
	for (vector<string>::size_type i = 0; i < currentShape.size(); i++) {
		cout << currentShape[i] << endl;
	}
	cout << endl;
}

void ShapeManagerUserInterface::GenerateShapesCommandLine(string inputString) {
	char inputChar = inputString[0];
	double input = atof(&inputChar);
	int number = input;
	this->GenerateShapeList(number);

}

void ShapeManagerUserInterface::PrintShapeList() {
	vector<Shape*> currentShapeList = this->controller.GetShapeList();

	for (vector<Shape*>::size_type i = 0; i < currentShapeList.size(); i++) {
		this->printOutDetails(currentShapeList[i]->PrintShape());
	}
}

} /* namespace view */

