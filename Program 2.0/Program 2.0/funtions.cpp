#include <iostream>
using namespace std;

int getInput() {   //gets a valid user input on the main menu and returns their choice
	int userChoice;

	cout << "Welcome to paint shop\n";
	cout << "We have a couple of options that you can choose from:\n";
	cout << "1 - Paint the interior of a house\n";
	cout << "2 - Paint the exterior of a house\n";
	cout << "3 - Paint both interior and exterior of a house\n";
	cout << "What option fits you more?\n";
	cin >> userChoice;
	cin.clear();
	cin.ignore(10000, '\n');
	
	while ((userChoice != 1) && (userChoice != 2) && (userChoice != 3)) {
		cout << "Please enter a valid number\n";
		cin >> userChoice;
		cin.clear();
		cin.ignore(10000, '\n');
	}
	return userChoice;
}

int getPosInt() {   //gets a valid positive integer from the user and returns it
	int posInt;
	cin >> posInt;
	cin.clear();
	cin.ignore(10000, '\n');

	while (!(posInt > 0)) {
		cout << "Please enter a valid number\n";
		cin >> posInt;
		cin.clear();
		cin.ignore(10000, '\n');
	}
	return posInt;
}

int getAreaInterior() {   //uses user inputs for interior wall numbers and length and width to calculate a total area
	int walls;
	int area = 0;

	cout << "Now, how many interior walls do you want to paint?\n";
	walls = getPosInt();
	
	for (int i = 1; (i < (walls+1)); i++) {   //runs for the number of walls, getting length and with for each
		int length = 0;
		int width = 0;
		cout << "What is the length and height for wall " << i << " :\n" << "Length = ";
		length = getPosInt();
		cout << "\nWidth = ";
		width = getPosInt();
		area += (length * width);
		cout << endl;
	}
	return area;

}

int getAreaExterior() {   //uses user inputs for exterior wall numbers and length and width to calculate a total area
	int walls;
	int area = 0;

	cout << "Now, how many exterior walls do you want to paint?\n";
	walls = getPosInt();

	for (int i = 1; (i < (walls + 1)); i++) {   //runs for the number of walls , getting length and width for each
		int length = 0;
		int width = 0;
		cout << "What is the length and height for wall " << i << " :\n" << "Length = ";
		length = getPosInt();
		cout << "\nWidth = ";
		width = getPosInt();
		area += (length * width);
		cout << endl;
	}
	return area;

}

void outputCost(int interiorArea, int exteriorArea) {   //takes areas and calculates how many cans will be needed and the cost of those and outputs it

	if ((interiorArea > 0) && (exteriorArea == 0)) {   //checks if it is interior only
		cout << "As each can covers 400 feet\n";
		cout << "With an interior area of " << interiorArea << " square feet, you will need to get " << float(interiorArea / 400.0);
		cout << "\nSo in total we will need " << ceil(interiorArea/400.0) << " interior paint can(s)\n";
		cout << "\nNow let's calculate the cost to paint the interior of the house\nThe price of an interior can is $ 100\n";
		cout << "The total cost is $ " << ceil(interiorArea / 400.0) * 100 << endl;

	}
	else if ((interiorArea == 0) && (exteriorArea > 0)) {   //checks if it is exterior only
		cout << "As each can covers 400 feet\n";
		cout << "With an exterior area of " << exteriorArea << " square feet, you will need to get " << float(exteriorArea / 400.0);
		cout << "\nSo in total we will need " << ceil(exteriorArea / 400.0) << " exterior paint can(s)\n";
		cout << "Now let's calculate the cost to paint the exterior of the house\nThe price of an exterior can is $ 150\n";
		cout << "The total cost is $ " << ceil(exteriorArea / 400.0) * 150 << endl;
	}
	else if ((interiorArea > 0) && (exteriorArea > 0)) {   //checks if it is both ext and int
		cout << "As each can covers 400 feet\n";
		cout << "With an interior area of " << interiorArea << " square feet, you will need to get " << float(interiorArea / 400.0);
		cout << "\nSo in total we will need " << ceil(interiorArea / 400.0) << " interior paint can(s)\n";
		cout << "With an exterior area of " << exteriorArea << " square feet, you will need to get " << float(exteriorArea / 400.0);
		cout << "\nSo in total we will need " << ceil(exteriorArea / 400.0) << " exterior paint can(s)\n";
		cout << "\nNow let's calculate the cost to paint the both the interior and exterior of the house\n";
		cout << "The price of an interior can is $ 100 and the price of an exterior can is $ 150\n";
		cout << "The total cost is $ " << (ceil(exteriorArea / 400.0) * 150) + (ceil(interiorArea / 400.0)) * 100 << endl;
	}
}