#include "pch.h"
#include <iostream>

using namespace std;

void printBoard(char board[9]) {
	std::cout << " " << board[0] << " | " << board[1] << " | " << board[2] << " \n";
	std::cout << " --|---|--\n";
	std::cout << " " << board[3] << " | " << board[4] << " | " << board[5] << " \n";
	std::cout << " --|---|--\n";
	std::cout << " " << board[6] << " | " << board[7] << " | " << board[8] << " \n";
};

//void chooseX() {
//	std::cout << "Player X, choose a location\n";
//	std::cin >> location;
//	if (location !> 0 || location !< 10) {
//		boardPlaces[location - 1] = 'X';
//		turn = 'o';
//	}
//	else {
//
//	}
//}

int main()
{
	char gameState = 0;
	char turn = 'x';
	int location;
	char boardPlaces[9] = { '1','2','3','4','5','6','7','8','9' };

	while (gameState == 0) {
		printBoard(boardPlaces);
		if (turn == 'x') {
			std::cout << "Player X, choose a location\n";
			std::cin >> location;
			boardPlaces[location - 1] = 'X';
			turn = 'o';
		}
		else {
			std::cout << "Player O, choose a location\n";
			std::cin >> location;
			boardPlaces[location - 1] = 'O';
			turn = 'x';
		}
	}
	return 0;
}

