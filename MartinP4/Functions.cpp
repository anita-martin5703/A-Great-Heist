/* Anita Martin
	amartin98@cnm.edu
	Mini Cooper and its cargo

	Functions.cpp
*/

#include "Functions.h"

void WriteHeader()
{
	cout << "\n\t\tWelcome to Anita's Mini-Cooper Heist!" << endl;
	cout << "This is no ordinary job our mission is to rob some bad guys and steal their goods. "
		"As you can imagine we need fast cars and something that can carry some insane loads. "
		"Luckliy we have built some monster mini-coopers that can help us take them down.";

	cout << endl << endl;
}

void WriteInstruction()
{
	cout << "\nYour goal, if you choose to accept, is to help us figure out exacly how much precious metals we can carry in our beefed up vehicles. "
		"You will help us in determining what type of vehicle to take and the type of metals we should carry and if that will all fit into our vehicle.\n"
		"Are you ready?";

	cout << endl << endl;
}

int SelectMetalForBars()
{
	// show a menu using the metalType vector and use human indices
	cout << "\nTo begin please enter the number of the type of metal you would like: \n";
	int metalSelection{ 0 };
	for (int i = 0; i < METAL_NAME.size(); ++i)
	{
		cout << endl;
		cout << i + 1 << ". " << METAL_NAME.at(i);
	}
	cout << endl;
	cin >> metalSelection;
	metalSelection--;
	return metalSelection;
}

int SelectCooperModel()
{
	int cooperType{ 0 };
	// ask the user to select a cooper type.
	cout << "\nPlease select the type of mini cooper:\n"
		"\t(1) 2-Door\n"
		"\t(2) 4-Door\n";
	cin >> cooperType;
	if (cooperType == 1)
	{
		cooperType = COOPER_2DOOR;
	}
	if (cooperType == 2)
	{
		cooperType = COOPER_4DOOR;
	}

	cout << endl;

	return cooperType ;
}


int SelectNumberOfBars()
{
	int numOfBars{ 0 };
	cout << "\nPlease select the number of bars to try and carry in the vehicle?\n";
	cin >> numOfBars;
	return numOfBars; 
}

double CalculateWeightOfBars(int index, int numBars)
{
	// weight of 1 bar = volume of 1 bar * its density
	int oneBar = BAR_CUIN * DENSITY.at(index);

	// weight of all the bars = numOfBars * weight of one
	int totalNumBars = numBars * oneBar;

	return 0.0;
}

double CalculateCargoCapacity(int cooperType)
{
	// set capacity according to which cooper type it is
	if (cooperType == 1)
	{
		double{24.0};
	}
	if (cooperType == 2)
	{
		double{32.8};
	}

	return cooperType; 
}

string CarryBarWeight(double totalBarsWeight)
{
	// start the stringstream
	stringstream msgForWeightCarry;
	cout << totalBarsWeight << ' ';

	// if it can carry the weight, add a positive message
	if (totalBarsWeight <= 1800)
	{
		cout << "\nYour vehicle can handle the amount of bars you inputted.\n";
	}
	// else it cannot carry the weight
	else
	{
		cout << "\nYou cannot take all of the bars requested.\n";
	}

	return msgForWeightCarry.str();
}

string FitBarVolume(int numBars, double cargoCapacity)
{
	// calculate the total bar volume ceil(numbers * volume of one bar)
	int totalBarVolume = ceil(numBars * BAR_CUIN);

	return string();
}

string MaxCarBars(double cargoCapacity, double oneBarWt)
{


	// calculate the volume of those bars and see if they fit in the cargo space.
	int numBarsMax = WEIGHT_CAP / oneBarWt;

	// calculate the volume of the numBarsMax
	double volBarsMax = numBarsMax * BAR_CUIN;

	// calculate the number of bars that can be carried according to weight.
	if (volBarsMax <= cargoCapacity)
	{
		cout << "You selected " << SelectMetalForBars << ". The total bars it can hold is " << cargoCapacity;
	}
	else
	{
		cout << "You selected " << SelectMetalForBars << ". It will NOT fit in the cargo space you selected " << cargoCapacity;
	}

	return string();
}
