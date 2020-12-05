
#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;
std::vector<std::string> makeBox(float n) {
	std::vector<std::string> s;
	for (size_t i = 1; i <= n; i++)
	{
		if (float(n / i) == float(n) || float(n / i) == float(1))
			s.push_back(std::string(n, '#'));
		else
			s.push_back("#" + std::string(n - 3, ' ') + " #");
	}
	return s;
}
int main()
{
	 
	for (size_t i = 0; i < makeBox(25).size(); i++)
	{
		cout<<makeBox(25)[i]<<endl;
	}
	
}

