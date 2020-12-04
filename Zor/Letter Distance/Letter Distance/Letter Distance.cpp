
#include "pch.h"
#include <iostream>
using namespace std;
int letterDistance(std::string str1, std::string str2) {
	int a, b,c=0;
	if (str1.length() >= str2.length())
	{
		for (size_t i = 0; i < str2.length(); i++)
		{
			a = str1[i];
			b = str2[i];
			c += abs(a - b);
			if ((i + 1) == str2.length())
			{
				c += str1.length() - str2.length();
			}
		}
	}
	else
	{
		for (size_t i = 0; i < str1.length(); i++)
		{
			a = str1[i];
			b = str2[i];
			c += abs(a - b);
			if ((i + 1) == str1.length())
			{
				c +=( str2.length() - str1.length());
			}
		}
	}
	
	return c;
}
int main()
{
	cout << letterDistance("house", "fly") << endl;
}
