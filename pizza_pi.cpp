#include <iostream>
using namespace std;

int main() {
	const float PI = 3.14159,
		AREA_OF_PIZZA_SLICE = 14.125;

	int diameterOfPizza,
		radiusOfPizza,
		areaOfPizza,
		numOfSlices;

	//Prompt user for the diameter of a pizza
	cout << "Please enter the diameter of the pizza (in inches): ";
	cin >> diameterOfPizza;

	radiusOfPizza = diameterOfPizza / 2; //radius of the pizza

	//Calculate the area of the pizza
	areaOfPizza = PI*radiusOfPizza*radiusOfPizza;

	//Calculate the number of slices that can be taken from this pizza
	numOfSlices = areaOfPizza / AREA_OF_PIZZA_SLICE;

	//Display number of slices
	cout << numOfSlices << " slices can be cut from this pizza.\n\n";
}
