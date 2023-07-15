
#include "tic_tac_toe.h"
#include<iostream>
#include<string>
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include<memory>

using std::cout; using std::cin; using std::string;
using std::unique_ptr; using std::make_unique;

int main() 
{
	unique_ptr<TicTacToe> game;
	string first_player;
	char user_choice = 'y';

	do
	{
		auto game_type = 0;
		cout<<"Enter game type (3 or 4): ";
		cin>>game_type;

		if(game_type == 3)
		{
			game = make_unique<TicTacToe3>();
		}
		else
		{
			game = make_unique<TicTacToe4>();
		}


		cout<<"Enter first player: ";
		cin>>first_player;

		if(first_player == "X" || first_player == "O"){

		game->start_game(first_player);

		int position;

		while(!game->game_over())
		{
			cout<<"Enter a position: ";
			cin>>position;
			if(position >= 1 && position <= 9){
			game->mark_board(position);
			game->display_board();
			}
			else cout<<"Invalid option"<<"\n";
		}

		cout<<"The winner is: "<<game->get_winner()<<"\n";

		cout<<"Play again, enter y or Y? ";
		cin>>user_choice;
		}
		else cout<<"invalid option"<<"\n";
		


	}while(user_choice == 'y'  || user_choice == 'Y');

	return 0;
}