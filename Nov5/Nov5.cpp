// Nov5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include < vector>
auto print2DArray(std::vector <std::vector<std::string>> twoArray)
{
	int numberOfRowsInMainFunctionRightNow = 3;
	int numberOfColumnInMainFunctionRightNow = 5;
	std::cout << " The size of the 2D array is " << twoArray.size() << std::endl;
	std::cout << " Anh the size of the zeroth(first) row in the array is: " << twoArray[0].size();

	for (int rowNumber = 0; rowNumber < twoArray.size(); ++rowNumber)
	{
		for (int column = 0; column < numberOfColumnInMainFunctionRightNow; column++)
		{
			std::cout << twoArray[rowNumber][column] << " ";
		}
	}	std::cout << std::endl;
}


int main()
{
	std::vector<std::vector<std::string>> peopleInThisRoom =
	{
		{"Tim",		"Casper",		"Jaleah"},
		{"Python person" ,		"Hirata San",		"Empty spot",		"Demster",		 "Walden"},
		{"Sameer",		"Carol",		"Darth",		"Eve",		"Frank"}
	};
	std::cout << peopleInThisRoom[0][0] << std::endl;
	peopleInThisRoom[0][1] = "something else";
	print2DArray(peopleInThisRoom);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
