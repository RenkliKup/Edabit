
#include "pch.h"
#include <iostream>
using namespace std;
int quadraticEquation(int a, int b,int c)
{
	int root1 = (-b + sqrt((b * b - 4 * a * c))) / (2 * a);
	return root1;
}
int main()
{
	cout<< quadraticEquation(1, 2, -3) <<endl;
}

