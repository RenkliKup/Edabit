#include "pch.h"
#include <iostream>
#include <vector>
#include <utility>
using namespace std;
vector<vector<int>> evenOddPartition(vector<int> arr) 
{
	vector<int> a;
	vector<int> b;
	vector<int>::iterator i = arr.begin();
	while (!(i == arr.end()))
	{
		if (*i%2 == 0)
		{
			b.push_back(*i);
			i++;
		}
		else
		{
			a.push_back(*i);
			i++;
		}
	}
	return {b};
}
int main()
{

}

