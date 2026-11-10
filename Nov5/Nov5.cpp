

#include <iostream>
#include"TicTacToe.h"

void demoPassByREFERENCE()
{
	int a = 123;

	int& aliasOfA = a; 
	std::cout << "The value of a is: " << a << std::endl;
	std::cout << "The value of the COPY of a is: " << aliasOfA << std::endl;


	a = 456;
	std::cout << "The UPDATED value of a is: " << a << std::endl;
	std::cout << "The value of the COPY of a is: " << aliasOfA << std::endl;
}

int main()
{
	std::vector<std::vector<std::string>> ticTacToeGrid(5, std::vector<std::string>(3));
	TicTacToe::playGame(ticTacToeGrid);
	TicTacToe::printTheGrid(ticTacToeGrid);
}
