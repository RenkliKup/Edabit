
#include "pch.h"
#include <iostream>
using namespace std;
int circuitPower(int voltage, int current)
{
	return voltage * current;
}
int main()
{
	cout << circuitPower(230, 10) << endl;
}

