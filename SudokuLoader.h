//
// Created by jirka on 30.10.23.
//

#ifndef SUDOKUSOLVER_SUDOKULOADER_H
#define SUDOKUSOLVER_SUDOKULOADER_H


#include <string>
#include "SudokuBoard.h"

/**
 * @class SudokuLoader
 * @brief Class responsible for loading Sudoku puzzles from files.
 */
class SudokuLoader {
public:
    /**
     * @brief Loads a Sudoku puzzle from a file.
     * @param filename The name of the file containing the Sudoku puzzle.
     * @return A SudokuBoard object representing the loaded puzzle.
     */
    SudokuBoard load(std::string filename);
};


#endif //SUDOKUSOLVER_SUDOKULOADER_H
