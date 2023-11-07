//
// Created by jirka on 30.10.23.
//

#ifndef SUDOKUSOLVER_BACKTRACINGSOLVER_H
#define SUDOKUSOLVER_BACKTRACINGSOLVER_H


#include "SudokuSolver.h"
/**
 * @class BacktrackingSolver
 * @brief Sudoku solving algorithm using backtracking.
 *
 * This class implements the SudokuSolver interface and provides an algorithm based on backtracking to solve Sudoku puzzles.
 */
class BacktrackingSolver : public SudokuSolver {
public:
    /**
     * @brief Solves the Sudoku puzzle using a backtracking algorithm.
     * @param board A reference to a SudokuBoard object representing the puzzle to solve.
     * @return true if the puzzle is solved successfully, false otherwise.
     */
    bool solve(SudokuBoard &board) override;
};


#endif //SUDOKUSOLVER_BACKTRACINGSOLVER_H
