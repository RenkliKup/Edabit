
#include "pch.h"
#include <iostream>
using namespace std;
int howManySeconds(int hour)
{
	if (hour < 0)
		return abs(hour) * 3600;

	else
		return hour * 3600;
}
int main()
{
	cout << howManySeconds(24)<<endl;
}
