//
// Created by jirka on 30.10.23.
//

#ifndef SUDOKUSOLVER_SUDOKUBOARD_H
#define SUDOKUSOLVER_SUDOKUBOARD_H

#include <vector>
/**
 * @class SudokuBoard
 * @brief Class representing a Sudoku puzzle board.
 *
 * This class encapsulates the board state and provides methods for accessing and modifying the board,
 * as well as checking the validity of the board state.
 */
class SudokuBoard {
private:
    std::vector<std::vector<int>> board; ///< 2D vector representing the Sudoku board.

public:
    static const int SIZE = 9; ///< Constant size of the Sudoku board.
    /**
     * @brief Constructs a SudokuBoard with a given initial state.
     * @param input 2D vector of integers representing the initial state of the board.
     */
    SudokuBoard(const std::vector<std::vector<int>>& input);

    /**
     * @brief Retrieves the value at a given position on the board.
     * @param row The row index.
     * @param col The column index.
     * @return The value at the specified position.
     */
    int get(int row, int col) const;
    /**
     * @brief Sets the value at a given position on the board.
     * @param row The row index.
     * @param col The column index.
     * @param value The value to set at the specified position.
     */
    void set(int row, int col, int value);

    /**
     * @brief Checks if placing a number on the board is valid according to Sudoku rules.
     * @param row The row index.
     * @param col The column index.
     * @param num The number to check.
     * @return true if placing num is valid, false otherwise.
     */
    bool isValid(int row, int col, int num) const;
    /**
     * @brief Checks if the board is completely filled with valid numbers.
     * @return true if the board is full, false otherwise.
     */
    bool isFull() const;
    /**
     * @brief Prints the board state to the console.
     */
    void print() const;
};


#endif //SUDOKUSOLVER_SUDOKUBOARD_H
