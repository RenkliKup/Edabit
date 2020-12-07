// Persistent Little Bugger.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
#include "pch.h"
#include <iostream>
#include <string>  
using namespace std;
int bugger(int num) {
	int x=1;
	int y=1;
	int count = 0;
	int count2=0;
	while (true)
	{
		x = x*(num % 10);
		num = num / 10;
		if (num == 0)
		{
			num = x;
			if (count2 == 0)
				break;
			++count;
			if ((x / 10) == 0)
			{
				break;
			}
			x = 1;
		}	
		++count2;
		
	}
	return count;
}
int main()
{
	cout << bugger(9);
}
