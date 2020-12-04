
#include "pch.h"
#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;
float median(std::vector<float> arr) {
	std::sort(arr.begin(), arr.end());
	if (arr.size() % 2 == 0) {
		return (float)(arr[arr.size() / 2] + arr[arr.size() / 2 - 1]) / 2;
	}
	return (float)arr[arr.size() / 2];
}
int main()
{
	cout << median({ 21.4323, 432.54, 432.3, 542.4567 }) << endl;
}
