#pragma once

using namespace std;
#include <iostream>
#include <string>


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


class Car : public Vehicle
{
public:
	Car(){
		setManufacturer("");
		setYearBuilt(0);
		setCarDoors(0);
	}

	void setCarDoors(int cd){
		amtDoors = cd;
	}

	int getCarDoors() {
		return amtDoors;
	}

private:
	int amtDoors;

};


class Truck: public Vehicle
{
public:
	void setTowingCapicty(int tc) {
		towingCapicty = tc;
	}

	int getTowingCapicty() {
		return towingCapicty;
	}
private:
	int towingCapicty;
};

