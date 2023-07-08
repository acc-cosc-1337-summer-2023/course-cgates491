
#include "tic_tac_toe.h"
#include<iostream>
#include<string>

using std::cout; using std::cin; using std::string;

int main() 
{
	TicTacToe game;
	string first_player;
	char user_choice = 'y';

	do
	{
		cout<<"Enter first player: ";
		cin>>first_player;

		if(first_player == "X" || first_player == "O"){

		game.start_game(first_player);

		int position;

		while(!game.game_over())
		{
			cout<<"Enter a position: ";
			cin>>position;
			if(position >= 1 && position <= 9){
			game.mark_board(position);
			game.display_board();
			}
			else cout<<"Invalid option"<<"\n";
		}

		cout<<"The winner is: "<<game.get_winner()<<"\n";

		cout<<"Play again, enter y or Y? ";
		cin>>user_choice;
		}
		else cout<<"invalid option"<<"\n";
		


	}while(user_choice == 'y'  || user_choice == 'Y');

	return 0;
}