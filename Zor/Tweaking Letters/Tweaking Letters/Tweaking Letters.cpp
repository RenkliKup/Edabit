// Tweaking Letters.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;
std::string tweakLetters(std::string s, std::vector<int> arr) {
	std::string l="" ;
	char k=' ';
	for (size_t i = 0; i < arr.size(); i++)
	{

		int a = 0;
		a = (s[i] + arr[i]);
		if (a == 123)
			k = 'a';
		else if (a == 96)
			k = 'z';
		else
			k = a;

			l = l + k;
		
		

		
	}
	return l;
}
int main()
{
	cout << tweakLetters("xyz", { 1, 1, 1 })<<endl;
}