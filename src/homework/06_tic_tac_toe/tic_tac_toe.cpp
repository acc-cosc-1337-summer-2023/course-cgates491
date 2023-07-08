//cpp
#include "tic_tac_toe.h"
using std::cout;

bool TicTacToe::game_over()
{
    if(check_column_win() == true)
    {
        set_winner();
        return true;
    }
    else if(check_row_win() == true)
    {
        set_winner();
        return true;
    }
    else if(check_diagonal_win() == true)
    {
        set_winner();
        return true;
    }
    else if(check_board_full() == true)
    {
        set_winner();
        return true;
    }

    return false;
}

void TicTacToe::start_game(std::string first_player)
{
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position)
{
    pegs[position-1] = player;
    set_next_player();
}

void TicTacToe::display_board() const
{
    for(long unsigned int i=0; i < pegs.size(); i += 3)
    {
        cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";

    }
}

void TicTacToe::set_winner()
{
    if(player == "X")
    {
        winner = "O";
    }
    else
    {
        winner = "X";
    }
}



void TicTacToe::clear_board()
{
    for(auto& peg: pegs)
    {
        peg = " ";
    }
}

void TicTacToe::set_next_player()
{
    if(player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
}

bool TicTacToe::check_board_full()
{
    for(long unsigned int i=0; i < pegs.size(); i++)
    {
        if(pegs[i] == " ")
        {
            return false;
        }
    }

    return true;
}

bool TicTacToe::check_column_win()
{
    if((pegs[6] == "O" || pegs[6] == "X") && (pegs[3] == pegs[6]) && (pegs[0] == pegs[6]))
    {
        return true;
    }
    else if((pegs[7] == "O" || pegs[7] == "X") && (pegs[4] == pegs[7]) && (pegs[1] == pegs[7]))
    {
        return true;
    }
    else if((pegs[8] == "O" || pegs[8] == "X") && (pegs[5] == pegs[8]) && (pegs[2] == pegs[8]))
    {
        return true;
    }
   

    return false;

}

bool TicTacToe::check_row_win()
{
    if((pegs[0] == "O" || pegs[0] == "X") && (pegs[1] == pegs[0]) && (pegs[2] == pegs[0]))
    {
        return true;
    }
    else if((pegs[3] == "O" || pegs[3] == "X") && (pegs[4] == pegs[3]) && (pegs[5] == pegs[3]))
    {
        return true;
    }
    else if((pegs[6] == "O" || pegs[6] == "X") && (pegs[7] == pegs[6]) && (pegs[8] == pegs[6]))
    {
        return true;
    }
   

    return false;
}

bool TicTacToe::check_diagonal_win()
{
    if((pegs[0] == "O" || pegs[0] == "X") && (pegs[4] == pegs[0]) && (pegs[8] == pegs[0]))
    {
        return true;
    }
    else if((pegs[2] == "O" || pegs[2] == "X") && (pegs[4] == pegs[2]) && (pegs[6] == pegs[2]))
    {
        return true;
    }

    return false;
}