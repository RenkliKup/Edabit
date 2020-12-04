#include "pch.h"
#include <iostream>
using namespace std;
bool rectangleInCircle(int w, int h, int radius) {
	
	return pow(2 * radius, 2)>=pow(w, 2) + pow(h, 2) ;
}
int main()
{
	cout << rectangleInCircle(8, 6, 5) << endl;
}
