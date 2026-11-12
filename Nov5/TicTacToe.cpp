#include"TicTacToe.h"
#include<iostream> 
#include<string>
void TicTacToe::playGame(twoDGrid& ticTacToeGrid)
{
	bool isGameWon = false;
	int moveCount = 0;
	while (isGameWon == false)
	{
		std::cout << "Player X, enter your move: " << std::endl;
		std::cout << "Allowed moves are:" << std::endl;
		std::cout << "a_b_c" << std::endl; //doing this prevents user from having to say 0, 0 or 1, 2, etc.
		std::cout << "d_e_f" << std::endl;
		std::cout << "g_h_i" << std::endl;
		std::string playerXMove;
		std::getline(std::cin, playerXMove);
		updateGrid(ticTacToeGrid, playerXMove, "X");
		moveCount = moveCount + 1;
		std::cout << " After player X makes a move, the grid looks like this: " << std::endl;
		printTheGrid(ticTacToeGrid);
		std::cout << std::endl << std::endl;
		std::cout << "Now player O" << std::endl;
		std::string playerOMove;

		std::getline(std::cin, playerOMove);

		updateGrid(ticTacToeGrid, playerOMove, "O");
		moveCount++;
		if (moveCount >= 5)
		{
			isGameWon = checkForWin(ticTacToeGrid);
		}
		printTheGrid(ticTacToeGrid);

	}

} 


void TicTacToe::updateGrid(twoDGrid& ticTacToeGrid, std::string theMove, std::string playerID)
{
	//switch requires chars (or ints) -> strings will NOT work 

	if (theMove == "a")
	{
		ticTacToeGrid[0][0] = playerID;
	}

	else if (theMove == "b")
	{
		ticTacToeGrid[0][1] = playerID;
	}
	else if (theMove == "c")
	{
		ticTacToeGrid[0][2] = playerID;
	}
	else if (theMove == "d")
	{
		ticTacToeGrid[1][0] = playerID;
	}
	else if (theMove == "e")
	{
		ticTacToeGrid[1][1] = playerID;

	}
	else if (theMove == "f")
	{
		ticTacToeGrid[1][2] = playerID;
	}
	else if (theMove == "g")
	{
		ticTacToeGrid[2][0] = playerID;
	}
	else if (theMove == "h")
	{
		ticTacToeGrid[2][1] = playerID;
	}
	else if (theMove == "i")
	{
		ticTacToeGrid[2][2] = playerID;
	}
	else
	{
		std::cout << "Invalid move. You lose!. Muahahahahahahah" << std::endl;
	}
}

void TicTacToe::printTheGrid(twoDGrid& ticTacGrid)
{
	
	for (int row = 0; row < ticTacGrid.size(); ++row)
	{
		for (int col = 0; col < ticTacGrid[0].size(); ++col)
		{
			std::cout << "|" << ticTacGrid[row][col];
		}
		std::cout << std::endl;
		
		//std::cout << "_______" << std::endl;
	}
}

bool TicTacToe::checkForWin(const twoDGrid& ticTacToeGrid)
{
	//ticTacToeGrid[0][0] = "X";
	if (checkForHorizontalWin(ticTacToeGrid) == true)
	{
		return true;
	}
	else if (checkForVerticalWin(ticTacToeGrid) == true	)
	{
		return true;
	}
	else if (checkForDiagonalWin(ticTacToeGrid) == true)
	{
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

bool TicTacToe::checkForHorizontalWin(const twoDGrid& ticTacToeGrid)
{
	for (int row = 0; row < 3; ++row)
	{
		if (ticTacToeGrid[row][0] == ticTacToeGrid[row][1] 
			&& ticTacToeGrid[row][1] == ticTacToeGrid[row][2])
			{
				return true;
			}
	}
	return false;
}
	//		return true;
	//	}
	//else if (ticTacToeGrid[1][0] == ticTacToeGrid[1][1] && ticTacToeGrid[1][1] == ticTacToeGrid[1][2])
	//{
	//	return true;
	//}
	//else if (ticTacToeGrid[2][0] == ticTacToeGrid[2][1] && ticTacToeGrid[2][1] == ticTacToeGrid[2][2])
	//{
	//	return true;
	//}


bool TicTacToe::checkForVerticalWin(const twoDGrid& ticTacToeGrid)
{
	return false;
}

bool TicTacToe::checkForDiagonalWin(const twoDGrid& ticTacToeGrid)
{
	return false;
}
