//h
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
#include<vector>
#include "tic_tac_toe.h"

using std::vector;

class TicTacToeManager
{
public:
	void save_game(const TicTacToe game);
	friend ostream&operator<<(ostream& out, const TicTacToe & m);

private:
	void update_winner_count(string winner);
	vector<TicTacToe> games;
	int x_win{ 0 };
	int o_win{ 0 };
	int ties{ 0 };
};
#endif //