// printf Format Security.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
bool vulnerability()
{
	std::string input = "asdsa";
	bool vuln = false;
	if (input.size() == 0)
		return false;
	printf(input.c_str(), &vuln);
	return vuln > 0;
}
int main()
{
	cout << vulnerability();
}
