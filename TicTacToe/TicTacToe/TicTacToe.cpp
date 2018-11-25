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
int analyzeBoard(char board[9]);

int main() {
    char gameState = 0; // 0 = run game, 1 = X wins 2 = O wins 3 = draw
    char boardPlaces[9] = { '0','1','2','3','4','5','6','7','8' };
    int turnCount = 0; //when turnCount hits 9 game decides its a draw
    int location;
    int turn = 0;

    while (gameState == 0) {
        printBoard(boardPlaces);
        while (turn == 0) {
            location = turnX();
            if (location < 0 || location > 8) { // if location is not within the grid, retry
                std::cout << "Enter a valid position\n";
            }
            else if (boardPlaces[location] != 'X' && boardPlaces[location] != 'O') {
                boardPlaces[location] = 'X';
                turn = 1; // sets turn to O
                turnCount ++;
            }
            else {
                std::cout << "Location already chosen, please retry\n";
            }
        }
        printBoard(boardPlaces);
        gameState = analyzeBoard(boardPlaces);
        if(turnCount == 9) {
            gameState = 3;
            break;
        }
        if(gameState == 1) {
            break;
        }
        while (turn == 1) {
            location = turnO();
            if (location < 0 || location > 8) { // if location is not within the grid, retry
                std::cout << "Enter a valid position\n";
            }
            else if (boardPlaces[location] != 'X' && boardPlaces[location] != 'O') {
                boardPlaces[location] = 'O';
                turn = 0; // sets turn to X
                turnCount ++;
            }
            else {
                std::cout << "Location already chosen, please retry\n";
            }
        }
        gameState = analyzeBoard(boardPlaces);
        
    }
    if(gameState == 1) {
        std::cout << "Player X has won\n";
    }
    if(gameState == 2) {
        std::cout << "Player O has won\n";
    }
    if(gameState == 3) {
        std::cout << "Game is a draw\n";
    }
    return 0;
}

int turnX() {
    int locationX = 0;
    bool input = false;
    while(!input) {
        std::cout << "Player X, choose a location\n";
        std::cin >> locationX;
        if(!cin) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input.  Try again:\n";
        }
        else {
            input = true;
        }
    }
    return locationX;
}
int turnO() {
    int locationO = 0;
    bool input = false;
    while(!input) {
        std::cout << "Player O, choose a location\n";
        std::cin >> locationO;
        if(!cin){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input.  Try again:\n";
        }
        else {
            input = true;
        }
    }
    return locationO;
}

int analyzeBoard(char board[9]) {
    int gameState = 0;
    if(board[0] == board[1] && board[1] == board[2] && board[0] != 0) {
        if(board[0] == 'X') {
            gameState = 1;
        }
        else {
            gameState = 2;
        }
    }
    if(board[3] == board[4] && board[4] == board[5] && board[3] != 0) {
        if(board[3] == 'X') {
            gameState = 1;
        }
        else {
            gameState = 2;
        }
    }
    if(board[6] == board[7] && board[7] == board[8] && board[6] != 0) {
        if(board[6] == 'X') {
            gameState = 1;
        }
        else {
            gameState = 2;
        }
    }
    if(board[0] == board[3] && board[3] == board[6] && board[0] != 0) {
        if(board[0] == 'X') {
            gameState = 1;
        }
        else {
            gameState = 2;
        }
    }
    if(board[1] == board[4] && board[4] == board[7] && board[1] != 0) {
        if(board[1] == 'X') {
            gameState = 1;
        }
        else {
            gameState = 2;
        }
    }
    if(board[2] == board[5] && board[5] == board[8] && board[2] != 0) {
        if(board[2] == 'X') {
            gameState = 1;
        }
        else {
            gameState = 2;
        }
    }
    if(board[0] == board[4] && board[4] == board[8] && board[0] != 0) {
        if(board[0] == 'X') {
            gameState = 1;
        }
        else {
            gameState = 2;
        }
    }
    if(board[2] == board[4] && board[4] == board[6] && board[2] != 0) {
        if(board[2] == 'X') {
            gameState = 1;
        }
        else {
            gameState = 2;
        }
    }
    return gameState;
}
