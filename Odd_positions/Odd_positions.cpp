// Odd_positions.cpp : Odd position in string, It SHOULD be function.
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<vector>

std::vector <std::string> OddPlace(std::string Input)
{
	std::vector <std::string> Pile;
	std::string temp;
	for (int i = 0; i <= Input.size() - 1; i += 2)
	{
		temp = Input[i];
		Pile.push_back(temp);
	}
	return Pile;
}


int main()
{
	std::string Lineinput;
	std::vector <std::string> Pile;
	std::vector <std::string> temp;


	std::cout << "The tedious job, Go Ahead:";
	std::getline (std::cin,Lineinput);
	for (int i = 0; Lineinput.size() - 1; i++)
	{
		temp = OddPlace(Lineinput);
		std::cout <<"These are in odd places"<< temp[i]<<"\n";
	}

	/*for (int i = 0; i <= Lineinput.size() - 1; i+=2)
	{
		temp = Lineinput[i];
		Pile.push_back(temp);
	}
	for (int k = 0; k < Pile.size(); k++)
		std::cout << Pile[k] << "\n";*/

	return 0;
}

