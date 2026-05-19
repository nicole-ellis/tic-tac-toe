#include <iostream>
#include <vector>
#include <string>
#include "ttt.hpp"

void greet() {

  // Welcome message
  std::cout << "Welcome to Nicole's Terminal Tic Tac Toe!\n";

  // Tic Tac Toe Layout
  std::cout << R"(

            |-----------------------| 
            |        |     |        |
            |        |     |        |
            |   _____|_____|_____   |
            |        |     |        |
            |        |     |        |
            |   _____|_____|_____   |
            |        |     |        |
            |        |     |        |
            |        |     |        |
            |-----------------------|

  )";
}


void draw(std::vector<char>& board) {

  std::cout << "\n";

  std::cout << "     |     |      \n";

  std::cout << "  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << "  " <<"\n";

  std::cout << "_____|_____|_____ \n"; 
  std::cout << "     |     |      \n";

  std::cout << "  " << board[3] << "  |  " << board[4] << "  |  " << board[5] << "  " <<"\n";

  std::cout << "_____|_____|_____ \n";  
  std::cout << "     |     |      \n";

  std::cout << "  " << board[6] << "  |  " << board[7] << "  |  " << board[8] << "  " <<"\n";

  std::cout << "     |     |      \n";

  std::cout << "\n";

}

void playerMove(std::vector<char>& board, char player) {

  while(true) {
    int move;

    std::cout << "Player " << player << ", choose a number to make your move.\n";
    std::cin >> move;

    if(board[move - 1] == 'x' || board[move - 1] == 'o') {
      std::cout << "That space has already been taken!\n";
    }

    else {
      board[move - 1] = player;
      draw(board);
      break;
    }
  }
}