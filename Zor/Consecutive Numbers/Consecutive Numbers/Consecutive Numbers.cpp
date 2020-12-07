#include "pch.h"
#include <iostream>
#include <vector>
using namespace std;
bool cons(std::vector<int> arr) {
	bool is_true = true;
	for (size_t i = 0; i < arr.size(); i++)
	{
		for (size_t j = 0; j < arr.size(); j++)
		{
			if (arr[i] < arr[j])
			{
				int c;
				c = arr[i];
				arr[i] = arr[j];
				arr[j] = c;
			}
		}
	}
	for (size_t i = 0; i < arr.size(); i++)
	{
		for (size_t j = 1; j <= arr.size()-1; j++)
		{
			if ((arr[j]-arr[i])!=j)
			{
				is_true = false;
			}
		}
		break;
	}
	return is_true;
}
int main()
{
	cout << cons({5, 1, 4, 3, 2, 8});
}

