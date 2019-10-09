//cpp
#include "tic_tac_toe.h"

bool TicTacToe::game_over()
{
	return false;
}

void TicTacToe::start_game(string player)
{
	next_player = player;
	clear_board();
}

void TicTacToe::mark_board(int position)
{
}

void TicTacToe::set_next_player()
{
	if (next_player == "X")
	{
		next_player = "O";
	}
	else
	{
		next_player = "X";
	}
}

bool TicTacToe::check_column_win()
{

}

bool TicTacToe::check_row_win()
{

}

bool TicTacToe::check_diagonal_win()
{

}

void TicTacToe::clear_board()
{

}

bool TicTacToe::check_board_full()
{

}
