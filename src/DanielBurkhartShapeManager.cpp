//============================================================================
// Name        : DanielBurkhartShapeManager.cpp
// Author      : Daniel Burkhart
// Version     : Spring 2015
// Copyright   : Your copyright notice
// Description : TUI-Based Shape Manager in C++, Ansi-style
//============================================================================

#include <iostream>

#include "ShapeManagerUserInterface.h"

using view::ShapeManagerUserInterface;
using namespace std;

/**
 * The entry point of the program
 * @param argc
 * The count of the arguments
 * @param argv
 * The array containing all the arguments.
 * @return
 * 0
 */
int main(int argc, const char * argv[]) {

	ShapeManagerUserInterface userInterface = ShapeManagerUserInterface();

	cout << "Welcome to Daniel Burkhart's Shape Manager" << endl;

	if (argc != 1) {

		userInterface.GenerateShapesCommandLine(argv[1]);

	} else {

		userInterface.MenuSystem();
	}

	return 0;
}
