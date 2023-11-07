//
// Created by jirka on 30.10.23.
//

#include <stdexcept>
#include <fstream>
#include "SudokuLoader.h"

SudokuBoard SudokuLoader::load(std::string filename) {
    std::ifstream file(filename);
    const int SIZE = 9;
    std::vector<std::vector<int>> board(SIZE, std::vector<int>(SIZE));
    char ch;
    int row = 0, col = 0;

    while (file >> ch) {
        if (isdigit(ch)) {  // Ensure that the character is a digit
            board[row][col++] = ch - '0';
            if (col == SIZE) {
                col = 0;
                ++row;
            }
        }
    }
    if (row != SIZE || col != 0) {
        throw std::runtime_error("Incomplete or invalid Sudoku board");
    }
    return board;
}
