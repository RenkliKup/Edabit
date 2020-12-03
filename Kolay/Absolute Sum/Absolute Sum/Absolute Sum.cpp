// Absolute Sum.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include "pch.h"
#include <iostream>
#include <vector>
using namespace std;
int getAbsSum(std::vector<int> a)
{
	int sum = 0;
	std::vector<int>::iterator i = a.begin();
	while (!(i == a.end()))
	{
		sum += abs(*i);
		i++;
	}
	return sum;
}

int main()
{
	cout << getAbsSum({2, -1, 4, 8, 10})<<endl;
}

