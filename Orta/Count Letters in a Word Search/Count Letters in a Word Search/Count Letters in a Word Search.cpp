#include "pch.h"
#include <iostream>
#include <vector>
using namespace std;
int letterCounter(vector<vector<char>> arr, char c) {

	int son = 0;
	for (size_t i = 0; i < arr.size(); i++)
	{
		for (size_t j = 0; j < arr[i].size(); j++)
		{
			if (arr[i][j]==c)
			{
				son += 1;
			}
		}

	}

		return son;
}
int main()
{
	cout << letterCounter({
		{'D', 'E','Y', 'H', 'A', 'D'},
		{'C', 'B', 'Z', 'Y', 'J', 'K' },
		{'D', 'B', 'C', 'A', 'M', 'N'},
		{'F', 'G', 'G', 'R', 'S', 'R' },
		{'V', 'X', 'H', 'A', 'S', 'S'}
		},'D');
}

