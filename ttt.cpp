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
    }
    else {
      // Asks playerO to choose a number for their move
      playerMove(board, playerO);
    }
  }
}