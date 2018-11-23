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
    char boardPlace1 = '1';
    char boardPlace2 = '2';
    char boardPlace3 = '3';
    char boardPlace4 = '4';
    char boardPlace5 = '5';
    char boardPlace6 = '6';
    char boardPlace7 = '7';
    char boardPlace8 = '8';
    char boardPlace9 = '9';
	getBoard(boardPlace1, boardPlace2, boardPlace3, boardPlace4, boardPlace5, boardPlace6, boardPlace7, boardPlace8, boardPlace9);

	return 0;
}

