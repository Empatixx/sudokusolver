#include <iostream>
#include "SudokuLoader.h"
#include "BacktracingSolver.h"

int main() {
    SudokuLoader loader;
    SudokuBoard board = loader.load("sudoku1.txt");
    BacktrackingSolver solver;

    if (solver.solve(board)) {
        std::cout << "Solution found!" << std::endl;
        board.print();
    } else {
        std::cout << "No solution exists." << std::endl;
    }

    return 0;
}
