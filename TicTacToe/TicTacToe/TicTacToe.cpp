// TicTacToe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

void getBoard(char board1, char board2, char board3, char board4, char board5, char board6, char board7, char board8, char board9) {
	std::cout << " " << board1 << " | " << board2 << " | " << board3 << " \n";
	std::cout << " --|---|--\n";
	std::cout << " " << board4 << " | " << board5 << " | " << board6 << " \n";
	std::cout << " --|---|--\n";
	std::cout << " " << board7 << " | " << board8 << " | " << board9 << " \n";
};

int main()
{
	char gameState = 0;
	/*while (gameState = 0);*/
	char boardPlaces[9] = { '1','2','3','4','5','6','7','8','9' };

	getBoard(boardPlaces[0], boardPlaces[1], boardPlaces[2], boardPlaces[3], boardPlaces[4], boardPlaces[5], boardPlaces[6], boardPlaces[7], boardPlaces[8]);

	return 0;
}

