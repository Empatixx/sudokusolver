//
// Created by jirka on 30.10.23.
//

#include "BacktracingSolver.h"
// Concrete implementation of SudokuSolver using backtracking
bool BacktrackingSolver::solve(SudokuBoard &board) {

    for (int row = 0; row < 9; row++) {
        for (int col = 0; col < 9; col++) {
            if (board.get(row, col) == 0) {
                for (int num = 1; num <= 9; num++) {
                    if (board.isValid(row, col, num)) {
                        board.set(row, col, num);
                        if (solve(board)) {
                            return true;
                        }
                        board.set(row, col, 0);
                    }
                }
                return false;
            }
        }
    }
    return true;

}
