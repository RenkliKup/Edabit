
#include "pch.h"
#include <iostream>
#include <vector>
using namespace std;
bool oddeven(std::vector<int> arr) {
	int a=0, b=0;
	for (size_t i = 0; i < arr.size(); i++)
	{
		if (arr[i] % 2 == 0){++a;}
		else{++b;}
	}
	return b > a ?true :false;
}
int main()
{
	cout << oddeven({ 1, 2, 3, 4, 5, 6, 7, 8,})<<endl;
}

