#include<string>
#include<vector>

std::vector<std::vector<std::string>>ticTacToeGrid(3, std::vector < std::string>(3));

namespace TicTacToe
{

	using twoGrid = std::vector<std::vector<std::string>>;
	void playGame(twoGrid ticTacToeGrid);
	void playGame();
	void updateGrid(twoGrid ticTaToecGrid, std::string theMove);
	void updateGrid(twoGrid ticTacToeGrid, std::string theMove, std::string playerID);
}
