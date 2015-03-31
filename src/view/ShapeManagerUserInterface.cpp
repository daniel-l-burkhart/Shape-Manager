/*
 * ShapeManagerUserInterface.cpp
 *
 *  Created on: Mar 24, 2015
 *      Author: Daniel
 */

#include "ShapeManagerUserInterface.h"
#include "ShapeManagerController.h"
#include "Shape.h"

#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

using namespace std;
namespace view {

/**
 * The constructor of the class.
 */
ShapeManagerUserInterface::ShapeManagerUserInterface() {

}

/**
 * The destructor of the class.
 */
ShapeManagerUserInterface::~ShapeManagerUserInterface() {
	// TODO Auto-generated destructor stub
}

/**
 * Prompts the user if the menu system should repeat.
 */
void ShapeManagerUserInterface::repeatMenuSystem() {
	string response;

	cout << endl << "Press 'S' to generate more shapes or 'Q' to quit." << endl
			<< ">";
	cin >> response;

	while (response.length() > 1) {
		cout << "I'm sorry. That input is invalid. Please try again." << endl;
		this->repeatMenuSystem();
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

/**
 * The menu system to be displayed to the user.
 */
void ShapeManagerUserInterface::MenuSystem() {

	int numberOfShapes;

	cout << endl << "Please enter the number of shapes that you" << endl
			<< "would like to generate" << endl << ">";

	cin >> numberOfShapes;
	while (std::cin.fail()) {
		cin.clear();
		cin.ignore();
		cout << "Please enter a valid number." << endl;
		cin >> numberOfShapes;
	}

	this->GenerateShapeList(numberOfShapes);
	this->PrintShapeList();

	this->repeatMenuSystem();
}

/**
 * Generates the Shape list
 * @param randomShapes
 * 		The number of random shapes indicated by the user.
 */
void ShapeManagerUserInterface::GenerateShapeList(int randomShapes) {
	this->controller.GenerateShapes(randomShapes);
}

/**
 * Prints out the vector to the user.
 * @param currentShape
 * 		The current shape in the list to be printed out to the user.
 */
void ShapeManagerUserInterface::printOutDetails(vector<string> currentShape) {
	for (vector<string>::size_type i = 0; i < currentShape.size(); i++) {
		cout << currentShape[i] << endl;
	}
	cout << endl;
}

/**
 * Generates the shapes from the command line.
 * @param inputString
 * 		The string argument passed into the
 */
void ShapeManagerUserInterface::GenerateShapesCommandLine(string inputString) {
	char inputChar = inputString[0];
	double input = atof(&inputChar);
	int number = input;
	this->GenerateShapeList(number);
	this->PrintShapeList();
	this->repeatMenuSystem();

}

/**
 * Prints out the shape list to the user.
 */
void ShapeManagerUserInterface::PrintShapeList() {
	vector<Shape*> currentShapeList = this->controller.GetShapeList();

	for (vector<Shape*>::size_type i = 0; i < currentShapeList.size(); i++) {
		this->printOutDetails(currentShapeList[i]->PrintShape());
	}
}

} /* namespace view */

