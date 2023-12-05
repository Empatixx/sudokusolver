#include <iostream>
#include "SudokuLoader.h"
#include "BacktracingSolver.h"

int main(int agc, char** argv) {
    if (agc != 2) {
        std::cout << "Usage: " << argv[0] << " <input_file>" << std::endl;
        return 1;
    }
    std::string input_file = argv[1];
    SudokuLoader loader;
    SudokuBoard board = loader.load(input_file);
    BacktrackingSolver solver;

    if (solver.solve(board)) {
        std::cout << "Solution found!" << std::endl;
        board.print();
    } else {
        std::cout << "No solution exists." << std::endl;
    }

    return 0;
}
