//Nolan Rice Poject 2 CS201R
#include <iostream>
#include "funtions.h"
using namespace std;

int main() {
	int userChoice;
	int interiorArea = 0;
	int exteriorArea = 0;
	
	userChoice = getInput();   //gets a menu choice

	switch (userChoice)   //uses input to chose correct funtion
	{
	case 1:
		interiorArea = getAreaInterior();   //asks the user for interior measurements
		outputCost(interiorArea, exteriorArea);  //outputs cans need and cost
		break;
	case 2:
		exteriorArea = getAreaExterior();   //asks the user for exterior measurements
		outputCost(interiorArea, exteriorArea);   //outputs cans need and cost
		break;
	case 3:
		interiorArea = getAreaInterior();   //asks the user for interior measurements
		exteriorArea = getAreaExterior();	//asks the user for exterior measurements
		outputCost(interiorArea, exteriorArea);   //outputs cans need and cost
		break;
	}
	system("pause");
	return 0;
}