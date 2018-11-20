#include <iostream>
#include <string>
#include  "Header.h"
using namespace std;
class dishwatermachine1 : public Dishwatermachine
{
public:
	dishwatermachine1(int ultr, int machn)
	{
		ultra = ultr;
		machine = machn;
		cout << ultra << machine << endl;
	}
	~dishwatermachine1() {

	}

	
};

