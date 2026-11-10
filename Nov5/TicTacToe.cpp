#include<iostream>
#include"TicTacToe.h"
#include<string>
using namespace TicTacToe;

void TicTacToe::playGame()
{
	std::cout << "Player X, Enter your move: " << std::endl;
	std::cout << "abc" << std::endl;
	std::cout << "def" << std::endl;
	std::cout << "hgj" << std::endl;


	std::string playerXMove;
	std::getline(std::cin, playerXMove);
	updateGrid(ticTacToeGrid, playerXMove, "X");

	std::string playerYMove;
	std::getline(std::cin, playerYMove);
	updateGrid(ticTacToeGrid, playerYMove, "Y");
}

void TicTacToe::updateGrid(twoGrid ticTaToecGrid, std::string theMove)
{
	if (theMove == "a")
	{
		ticTacToeGrid[0][0] = playerID;
	}
	else if (theMove == "b")
	{
		ticTacToeGrid[0][1] = playerID;
	}
	void TicTacToe::printTheGrid()
	{

	}
}	
