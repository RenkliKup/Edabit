
#include "pch.h"
#include <iostream>
using namespace std;
bool isSafeBridge(std::string a)
{
	int s;
	return a.find_first_of(' ')>6000000?true:false;
}
int main()
{
	cout << isSafeBridge("******** *****") << endl;
	
	
}
