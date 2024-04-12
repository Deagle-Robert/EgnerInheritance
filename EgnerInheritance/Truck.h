#pragma once
using namespace std;
#include <iostream>
#include <string>
#include "Vehicle.h"
class Truck : public Vehicle
{
public:
	Truck() {
		setManufacturer("");
		setYearBuilt(0);
		setTowingCapicty(0);
	}
	void setTowingCapicty(int tc) {
		towingCapicty = tc;
	}

	int getTowingCapicty() {
		return towingCapicty;
	}
private:
	int towingCapicty;
};