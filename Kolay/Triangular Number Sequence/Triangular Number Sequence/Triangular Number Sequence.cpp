
#include "pch.h"
#include <iostream>
using namespace std;
int triangle(int num)
{
	int sonuc = 0;
	for (size_t i = 1; i <= num; sonuc = sonuc + i, i++){}
	return sonuc;
}
int main()
{
	cout << triangle(6)<<endl;
}

