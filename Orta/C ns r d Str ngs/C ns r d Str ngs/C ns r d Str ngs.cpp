
#include "pch.h"
#include <iostream>
using namespace std;
std::string uncensor(std::string str, std::string vowels) {
	int counter = 0;
	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] == '*')
		{
			str[i]=vowels[counter];
			counter++;
		}
	}
	return str;
}
int main()
{
    std::cout << "Hello World!\n"; 
}
