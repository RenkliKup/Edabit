
#include "pch.h"
#include <iostream>
using namespace std;
bool isEqual(int num1, int num2)
{
	if (num1 == num2)
		return true;
	else
		return false;
}
int main()
{
	cout << isEqual(2, 2) << endl;
}

