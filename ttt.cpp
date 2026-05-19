#include <iostream>
#include <vector>
#include <string>
#include "ttt.hpp"

// Vector to display values from 1-9 for players to choose from
std::vector<char> board = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

// Player variables for x and o
char playerX = 'x';
char playerO = 'o';


int main() {

  // Introduction sentence
  greet();
  
  // Prints the game board
  draw(board);

  for (int i = 9; i > 0; i--) {
    if (i % 2) {
      // Asks playerX to choose a number for their move
      playerMove(board, playerX);
        if (checkWin(board, playerX)) {
        std::cout << "Player x won!";
        return 0;
      }
    }
    else {
      // Asks playerO to choose a number for their move
      playerMove(board, playerO);
        if (checkWin(board, playerO)) {
        std::cout << "Player o won!";
        return 0;
      }
    }
  }

// After the loop is over and no winner has been found, the game is a draw.
std::cout << "It's a draw!\n";

return 0;
}