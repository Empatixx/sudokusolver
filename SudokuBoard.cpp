#include <iostream>
#include "SudokuBoard.h"

//
// Created by jirka on 30.10.23.
//
SudokuBoard::SudokuBoard(const std::vector<std::vector<int>>& input) : board(input) {}

int SudokuBoard::get(int row, int col) const {
    return board[row][col];
}

void SudokuBoard::set(int row, int col, int value) {
    board[row][col] = value;
}

bool SudokuBoard::isValid(int row, int col, int num) const {
    for (int x = 0; x < SIZE; x++) {
        if (board[row][x] == num) return false;
        if (board[x][col] == num) return false;
        if (board[3 * (row / 3) + x / 3][3 * (col / 3) + x % 3] == num) return false;
    }
    return true;
}

bool SudokuBoard::isFull() const {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] == 0) return false;
        }
    }
    return true;
}

void SudokuBoard::print() const {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            std::cout << board[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
