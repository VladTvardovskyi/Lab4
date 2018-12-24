#pragma once
#include <iostream>
#include <string>

using namespace std;

class DishWaterMachine
{
private:
	int waterLost;
	int numberOfPrograms;
	int numberOfSets;
protected:
	int justAVariable;
	int justANewVariable;
public:
	string name;
 	DishWaterMachine()
	int GetWaterLost()
	{
		return waterLost;
	}

	void setWaterLost(int valueWaterLost)
	{
		waterLost = valueWaterLost;
	}

	int getNumberOfPrograms()
	{
		return numberOfPrograms;
	}

	void setNumberOfPrograms(int valueNumerOfPrograms)
	{
		numberOfPrograms = valueNumerOfPrograms;
	}

	int getNumberOfSets()
	{
		return numberOfSets;
	}


	void setNumberOfsets(int valueNumberOfSets)
	{
		numberOfSets = valueNumberOfSets;
	}

	
	void Print()
	{
		cout << "waterlost=" << waterLost << "\t number of programs=" << numberOfPrograms << "\t name=" << name << "\t number of sets=" << numberOfSets << endl << endl;
	}
};



