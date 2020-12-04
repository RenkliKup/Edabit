
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
std::string doubleSwap(std::string s, char c1, char c2) {

	for (size_t i = 0; i < s.length(); i++)
	{
		if (s[i] == c1)
		{
			s[i] = c2;
		}
		else if (s[i] == c2)
		{
			s[i] = c1;
		}
	}
	return s;
}
int main()
{
	cout << doubleSwap("aabbccc", 'a', 'b') << endl;
}
