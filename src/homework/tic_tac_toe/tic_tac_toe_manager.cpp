#include "tic_tac_toe_manager.h"
//cpp

 ostream&operator<<(ostream & out, const TicTacToeManager & m)
{
	 for (auto game : m.games)
	 {
		 out << game << "\n";
	 }

	 out << "X Wins: " << m.x_win << "\n";
	 out << "O Wins: " << m.o_win << "\n";
	 out << "CAT: " << m.ties << "\n";

	 return out;
}

 void TicTacToeManager::save_game(const TicTacToe game)
 {
	 update_winner_count(game.get_winner());
	 games.push_back(game);
 }

 void TicTacToeManager::update_winner_count(string winner)
 {
	 if (winner == "x")
	 {
		 x_win++;
	 }
	 else if (winner == "X")
	 {
		 o_win++;
	 }
	 else
	 {
		 ties++;
	 }
 }
