#include <iostream>
#include <vector>
using namespace std;

// Function to check if placing a value at given position is safe
bool isSafe(const int row, const int col, const vector<vector<int>> &sudoku, const int val){
    // Check row and column constraints
    for(int i = 0; i < sudoku.size(); i++){
        if(sudoku[row][i] == val || sudoku[i][col] == val){
            return false;
        }
    }
    
    // Check 3x3 box constraint
    int boxRowStart = 3 * (row / 3);
    int boxColStart = 3 * (col / 3);
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(sudoku[boxRowStart + i][boxColStart + j] == val){
                return false;
            }
        }
    }
    
    return true;
}

// Function to solve Sudoku recursively using backtracking
bool solveSudoku(vector<vector<int>> &sudoku){
    int n = sudoku.size();

    for(int row = 0; row < n; row ++){
        for(int col = 0; col < n; col++){
            if(sudoku[row][col] == 0){ // Found an empty cell
                for(int val = 1; val <= 9; val++){ // Try all possible values
                    if(isSafe(row, col, sudoku, val)){
                        sudoku[row][col] = val; // Place the value

                        // Recursive call to solve the rest of the Sudoku
                        if(solveSudoku(sudoku)) return true;
                        
                        // Backtrack
                        sudoku[row][col] = 0;
                    }
                }
                return false; // No valid number found, backtrack
            }
        }
    }
    return true; // Sudoku solved
}

int main(){
    // Sample Sudoku board with empty spaces represented by 0
    vector<vector<int>> board = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    // Solve the Sudoku
    if(solveSudoku(board)){
        // Print the solved Sudoku board
        cout << "Sudoku Solved:" << endl;
        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[i].size(); j++){
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
    }
    else {
        cout << "No solution exists." << endl;
    }

    return 0;
}
