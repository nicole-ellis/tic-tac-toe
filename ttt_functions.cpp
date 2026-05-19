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

bool checkWin(std::vector<char>& board, char player) {

  // Win horizontally
  if(board[0] == player && board[1] == player && board[2] == player){
    return true;
  }
  else if(board[3] == player && board[4] == player && board[5] == player){
    return true;
  }
  else if(board[6] == player && board[7] == player && board[8] == player){
    return true;
  }

  // Win vertically
  else if(board[0] == player && board[3] == player && board[6] == player){
    return true;
  }
  else if(board[1] == player && board[4] == player && board[7] == player){
    return true;
  }
  else if(board[2] == player && board[5] == player && board[8] == player){
    return true;
  }

  // Win diagonally
  else if(board[0] == player && board[4] == player && board[8] == player){
    return true;
  }
  else if(board[2] == player && board[4] == player && board[6] == player){
    return true;
  }

  // Not a win
  else{
    return false;
  }
}