#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
std::string longBurp(int num) {
	string s = "Bu";
	if (num >= 0)
	{
		for (size_t i = 0; i < num; i++)
		{
			s=s + "r";
		}
	}
	else
	{
		return s + "rp";
	}
	return s + "p";

}
int main()
{
	cout << longBurp(5)<<endl;
	system("pause");
}

