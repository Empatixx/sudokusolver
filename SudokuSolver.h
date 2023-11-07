//
// Created by jirka on 30.10.23.
//

#ifndef SUDOKUSOLVER_SUDOKUSOLVER_H
#define SUDOKUSOLVER_SUDOKUSOLVER_H


#include "SudokuBoard.h"
/**
 * @class SudokuSolver
 * @brief Abstract class that defines the interface for Sudoku solving algorithms.
 *
 * This class declares a pure virtual function that must be implemented by derived classes to solve a Sudoku puzzle.
 */
class SudokuSolver {
public:
    /**
     * @brief Solves the Sudoku puzzle.
     * @param board A reference to a SudokuBoard object representing the puzzle to solve.
     * @return true if the puzzle is solved successfully, false otherwise.
     */
    virtual bool solve(SudokuBoard &board) = 0;
};



#endif //SUDOKUSOLVER_SUDOKUSOLVER_H
