#include "pch.h"
#include <iostream>
using namespace std;
int tetra(int n) {
	return (n*(n + 1)*(n + 2)) / 6;
}
int main()
{
	cout << tetra(6) << endl;
}
