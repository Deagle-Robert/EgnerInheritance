#pragma once

using namespace std;
#include <iostream>
#include <string>
#include "Vehicle.h"

class Vehicle
{
private:
	string manufacturer;
	int year_built;


public:
	Vehicle() {
		setManufacturer("");
		setYearBuilt(0);
	}
	void setManufacturer(string mf) {
		manufacturer = mf;
	};
	string getManufacturer() {
		return manufacturer;
	};
	void setYearBuilt(int yb) {
		year_built = yb;
	};
	int getYearBuilt() {
		return year_built;
	};
	void displayInfo() {
		cout << "Vehicle Manufacturer:" << manufacturer << endl;
		cout << "Vehicle year built:" << year_built << endl;
	}
	
};







