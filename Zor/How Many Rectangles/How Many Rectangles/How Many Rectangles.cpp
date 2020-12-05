
#include "pch.h"
#include <iostream>
using namespace std;
int rectangles(int n) {
	return pow(((n*(n + 1)) / 2), 2);
}
int main()
{
	cout << rectangles(3);
}

