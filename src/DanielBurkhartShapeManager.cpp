//============================================================================
// Name        : DanielBurkhartShapeManager.cpp
// Author      : Daniel Burkhart
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>


#include "ShapeManagerUserInterface.h"

using view::ShapeManagerUserInterface;
using namespace std;

int main(int argc, const char * argv[]) {

	ShapeManagerUserInterface userInterface = ShapeManagerUserInterface();

	if (argc != 1) {

		//userInterface.GenerateShapeList(argv[1]);
	} else {
		userInterface.MenuSystem();
	}

	return 0;
}
