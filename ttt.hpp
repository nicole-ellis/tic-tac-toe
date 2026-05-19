#include <vector>
#include <string>

void greet();

void draw(std::vector<char>& board);

void playerMove(std::vector<char>& board, char player);

bool checkWin(std::vector<char>& board, char player);