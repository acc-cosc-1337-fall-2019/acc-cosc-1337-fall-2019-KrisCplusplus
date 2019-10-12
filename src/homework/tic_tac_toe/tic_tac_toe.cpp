//cpp
#include "tic_tac_toe.h"

bool TicTacToe::game_over()
{
	if (check_column_win() || check_row_win() || check_diagonal_win() || check_board_full())
	{
		return true;
	}
	
	return false;
}

void TicTacToe::start_game(string player)
{
	next_player = player;
	clear_board();
}
/*
Remember position is what user sees. When you say position to vector subtract 1 from position.
*/
void TicTacToe::mark_board(int position)
{
	pegs[position - 1] = next_player;
	set_next_player();

}
string TicTacToe::get_player() const
{
	return next_player;
}
void TicTacToe::display_board() const
{
	std::cout << "Board: " << display_board << "\n";
}
/*
Remember position is what user sees. When you say position to vector subtract 1 from position.
*/
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
	for (std::size_t i = 0; i < 3; i++)
	{
		if (pegs[i] == pegs[i + 3] && pegs[i + 3] pegs[i + 6] && pegs[i + 6] != " ")
		{
			return true;
	    }
    }

}

bool TicTacToe::check_row_win()
{
	for (std::size_t i = 0; i < 1; i++)
	{
		if (pegs[i] == pegs[i + 1] && pegs[i + 1] pegs[i + 2] && pegs[i + 2] != " ")
		{
			return true;
		}
	}

	return false;
}

bool TicTacToe::check_diagonal_win()
{
	for (std::size_t i = 0; i < 4; i++)
	{
		if (pegs[i] == pegs[i + 4] && pegs[i + 4] pegs[i + 8] && pegs[i + 8] != " ")
		{
			return true;
		}
	}

	return false;

}

void TicTacToe::clear_board()
{

}

bool TicTacToe::check_board_full()
{
	for (std::size_t i = 0; i < 1; i++)
	{
		if (pegs[i] == pegs[i + 2] && pegs[i + 2] pegs[i + 4] && pegs[i + 4] pegs[i + 6] && pegs[i + 6] 
			pegs[i + 5] && pegs[i + 5] && pegs[i + 8] && pegs[i + 8] pegs[i + 7] && pegs[i + 7] pegs[i + 3] && pegs[i + 3]  pegs[i + 1] && pegs[i + 1] != " ")
		{
			return true;
		}
	}

	return false;
}
