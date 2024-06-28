#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;


bool isSafe(int row, int col, const vector<vector<int>>& board, int n) {
    // Check if there's a queen in the same row to the left
    for (int i = 0; i < col; ++i) {
        if (board[row][i] == 1) {
            return false;
        }
    }

    // Check upper diagonal on left side
    for (int i = row, j = col; i >= 0 && j >= 0; --i, --j) {
        if (board[i][j] == 1) {
            return false;
        }
    }

    // Check lower diagonal on left side
    for (int i = row, j = col; i < n && j >= 0; ++i, --j) {
        if (board[i][j] == 1) {
            return false;
        }
    }

    return true;
}


void solve(int col, vector<vector<int>>& ans, vector<vector<int>>& board, int n) {
    // Base case: If all queens are placed
    if (col == n) {
        vector<int> temp;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                temp.push_back(board[i][j]);
            }
        }
        ans.push_back(temp);
        return;
    }

    // Recursive case: Try placing queen in each row of current column
    for (int row = 0; row < n; ++row) {
        if (isSafe(row, col, board, n)) {
            board[row][col] = 1; // Place queen

            solve(col + 1, ans, board, n); // Recur to place queens in subsequent columns

            board[row][col] = 0; // Backtrack: Remove queen and try other rows
        }
    }
}

vector<vector<int>> Nqueens(int n){
    vector<vector<int>> board(n, vector<int>(n,0));
    vector<vector<int>> ans;

    solve(0,ans,board,n);
    return ans;
}

int main() {
    int n = 4;
    vector<vector<int>> configs = Nqueens(n);

    for (const auto& board : configs) {
        for (int i = 0; i < n * n; ++i) {
            if (i % n == 0 && i != 0) {
                cout << endl;
            }
            cout << board[i] << " ";
        }
        cout << "\n" << endl;
    }
}
