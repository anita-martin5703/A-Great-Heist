/* Anita Martin
	amartin98@cnm.edu
	Mini Cooper and its cargo

	Driver.cpp
*/

#include "Functions.h"


int main() {
	WriteHeader();
	WriteInstruction();
	
	// declare variables
	double cooperType{ 0 };
	int index{ 0 };
	int numBars{ 0 };
	double cargoCapacity{ 0 };
	double totalBarWt{ 0.0 };
	char answer{ 'y' };

	do {
		
		// User selects type of metal
		index = SelectMetalForBars();
		
		// User selects cooper model
		cooperType = SelectCooperModel();

		// Number of bar is recorded
		numBars = SelectNumberOfBars();

		// Cargo capacity is determined
		cargoCapacity = CalculateCargoCapacity(cooperType);

		// Weight of bars is calculated 
		totalBarWt = CalculateWeightOfBars(index, numBars);

		// create a string describing what the user selected
		cout << "The precious metal you have selected is\n" << METAL_NAME.at(index) << "." << endl;
		cout << "The cooper model type you wanted was\n" << SelectCooperModel << "." << endl;
		cout << "The number of bars you wanted to fit into the vehicle was\n" << numBars << "." << endl;

		// sting of questions
		string question1 = CarryBarWeight(totalBarWt);
		cout << question1;

		string question2 = FitBarVolume(numBars, cargoCapacity);
		cout << question2;

		string question3 = MaxCarBars(cargoCapacity, totalBarWt/numBars);
		cout << question3;

		// ask if they want to go again
		cout << "\nDo you want try again? y/n \n";
		cin >> answer;

	} while (answer == 'y');

	// say goodbye
	cout << "\nThank you for helping us today.\n";

	return 0;
}