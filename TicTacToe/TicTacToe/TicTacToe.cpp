#include "pch.h"
#include <iostream>

using namespace std;

void printBoard(char board[9]) {
	std::cout << " " << board[0] << " | " << board[1] << " | " << board[2] << " \n";
	std::cout << " --|---|--\n";
	std::cout << " " << board[3] << " | " << board[4] << " | " << board[5] << " \n";
	std::cout << " --|---|--\n";
	std::cout << " " << board[6] << " | " << board[7] << " | " << board[8] << " \n";
}

int turnX();
int turnO();

int main()
{
	char gameState = 0;
	char boardPlaces[9] = { '0', '1','2','3','4','5','6','7','8' };
	char NewPlace;
	int location;
	int turn = 0;

	while (gameState == 0) {
		printBoard(boardPlaces);
		while (turn == 0) {
			location = turnX();
			if (boardPlaces[location] != 'X' && boardPlaces[location] != 'O') {
				boardPlaces[location] = 'X';
				turn = 1;
			}
			else {
				std::cout << "Location already chosen, please retry\n";
			}
		}
		printBoard(boardPlaces);
		while(turn == 1) {
			location = turnO();
			if (boardPlaces[location] != 'X' && boardPlaces[location] != 'O') {
				boardPlaces[location] = 'O';
				turn = 0;
			}
			else {
				std::cout << "Location already chosen, please retry\n";
			}
		}
	}



	return 0;
}
int turnX() {
	int location;
	std::cout << "Player X, choose a location\n";
	std::cin >> location;
	return location;
}
int turnO() {
	int location;
	std::cout << "Player O, choose a location\n";
	std::cin >> location;
	return location;
}