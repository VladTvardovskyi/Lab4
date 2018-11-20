#include <iostream>
#include <string>
#include  "Header.h"
using namespace std;
int main()
{
	Dishwatermachine a;
	a.Setwaterlost(11);
	a.name = "apple wash";
	a.Setnumber_of_programs(5);
	a.Setnumber_of_sets(5);
	a.Printf();

	system("pause");
	return 0;
}