// Maximum Edge of a Triangle.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include "pch.h"
#include <iostream>
using namespace std;
int nextEdge(int side1, int side2)
{
	return (side1 + side2) - 1;
}
int main()
{
	cout << nextEdge(8,10) << endl;
}

