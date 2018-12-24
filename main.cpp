#include <iostream>
#include <string>
#include  "Header.h"
using namespace std;
int main()
{
	DishWaterMachine Machine;
	Machine.setWaterLost(11);
	Machine.name = "apple wash";
	Machine.setNumberOfPrograms(5);
	Machine.setNumberOfSets(5);
	Machine.Print();

	system("pause");
	return 0;
}
