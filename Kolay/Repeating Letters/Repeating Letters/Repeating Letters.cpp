#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
std::string doubleChar(std::string str) {
	string s;
	for (size_t i = 0; i < str.length(); i++)
	{
		s += str[i];
		s += str[i];
	}
	return s;
}
int main()
{
	cout << doubleChar("String")<<endl;
}
