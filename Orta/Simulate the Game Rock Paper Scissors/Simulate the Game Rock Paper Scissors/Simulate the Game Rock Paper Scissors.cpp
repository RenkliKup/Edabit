
#include "pch.h"
#include <iostream>
using namespace std;
std::string rps(std::string s1, std::string s2) {
	if (s1 == "rock" && s2 == "paper")
		return "Player 2 wins";

	else if (s1 == "paper"&&s2 == "rock")
		return "Player 1 wins";
	else if (s1 == "paper" && s2 == "scissors")
		return "Player 2 wins";
	else if(s2 == "paper" && s1 == "scissors")
		return "Player 1 wins";
	else if (s2 == "scissors" && s1 == "scissors")
		return "TIE";

}
int main()
{
    std::cout << "Hello World!\n"; 
}
