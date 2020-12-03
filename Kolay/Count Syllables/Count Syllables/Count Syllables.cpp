
#include "pch.h"
#include <iostream>
using namespace std;
int numberSyllables(string a)
{
	int b= 1;
	for(int i=0;i<a.size();i++)
	{
		if (a[i] == '-')
				++b;
	}
	return b;
}
int main()
{
	cout << numberSyllables("buf-fet")<<endl;
}

