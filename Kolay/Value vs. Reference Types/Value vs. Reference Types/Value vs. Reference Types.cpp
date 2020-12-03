

#include "pch.h"
#include <iostream>
#include <vector>
using namespace std;
// Fix this broken code!
bool checkEquals(std::vector<int> arr1, std::vector<int> arr2) {
	for (int i = 0; i < arr1.size(); i++)
	{
		if (!(arr1[i] == arr2[i])) { return false; }

	}
	return true;
}
int main()
{
	cout << checkEquals({4, 7, 6},{4, 5, 6 });
}
