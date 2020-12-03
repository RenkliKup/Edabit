#include "pch.h"
#include <iostream>
#include <vector>
using namespace std;
int profit(std::vector<float> prices, int inv) {
	int b = ((prices[1] - prices[0])*inv);
	float a = ((prices[1] - prices[0])*inv);
	return (a - b) >= 0.5 ? b + 1 : b;
	
}
int main()
{
	cout << profit({ 225.89, 550.00 }, 100)<<endl;
}
