cmake_minimum_required(VERSION 3.22.1)
project(sudokusolver)

set(CMAKE_CXX_STANDARD 17)

add_executable(main.cpp
        SudokuBoard.cpp
        SudokuBoard.h
        SudokuSolver.cpp
        SudokuSolver.h
        BacktrackingSolver.cpp
        BacktracingSolver.h
        SudokuLoader.cpp
        SudokuLoader.h)
