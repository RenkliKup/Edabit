
#include "pch.h"
#include <iostream>
using namespace std;
int gcd(int a, int b) {
	if (b == 0)
		return 0;
	else
		gcd(b, a%b);
}
int main()
{
    std::cout << "Hello World!\n"; 
}
