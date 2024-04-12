#pragma once
using namespace std;
#include <iostream>
#include <string>
#include "Vehicle.h"
class Car : public Vehicle
{
public:
	Car() {
		setManufacturer("");
		setYearBuilt(0);
		setCarDoors(0);
	}

	void setCarDoors(int cd) {
		amtDoors = cd;
	}

	int getCarDoors() {
		return amtDoors;
	}

private:
	int amtDoors;

};