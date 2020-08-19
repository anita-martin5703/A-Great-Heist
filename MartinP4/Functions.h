/* Anita Martin
	amartin98@cnm.edu
	Mini Cooper and its cargo

	Functions.h
*/


#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <string>
#include <vector>
#include <iostream>
#include <sstream>
using namespace std;

//Vector Constants
const vector<string> METAL_NAME = { "Aluminum", "Silver", "Gold", "Copper", "Platinum" };
const vector<double> DENSITY = { 0.098, 0.379, 0.619, 0.323, 0.773 };

// Cargo volumes for both cars
const int COOPER_2DOOR{ 0 };
const int COOPER_4DOOR{ 0 };

// Standard bar volume Fort Knox size
const double BAR_CUIN = 7.0 * 3.625 * 1.75;

// Max weight capacity for cars
const int WEIGHT_CAP{ 1800 };

// Conversion from cubic inches to cubic feet
const double CUB_FT = 12 * 12 * 12;

// Function prototypes
void WriteHeader();
void WriteInstruction();
int SelectCooperModel();
int SelectMetalForBars();
int SelectNumberOfBars();
double CalculateWeightOfBars(int index, int numBars);
double CalculateCargoCapacity(int cooperType);
string CarryBarWeight(double barWeight);
string FitBarVolume(int numBars, double cargoCapacity);
string MaxCarBars(double cargoCapacity, double oneBarWt);

#endif
