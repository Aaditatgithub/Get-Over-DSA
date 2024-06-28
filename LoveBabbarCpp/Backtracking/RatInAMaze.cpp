#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

bool isSafe(int newx, int newy, vector<vector<bool>> &visited, const vector<vector<int>> &maze, const int n) {
    if ((newx >= 0 && newx < n) && (newy >= 0 && newy < n) && !visited[newx][newy] && maze[newx][newy] == 1) {
        return true;
    }
    return false;
}

void solve(int x, int y, const vector<vector<int>> &maze, const int n, vector<string> &ans,
    vector<vector<bool>> &visited, string &path) {

    // Base case
    if (x == n - 1 && y == n - 1) {
        ans.push_back(path);
        return;
    }

    // 4 movements: D, L, R, U 

    // D
    if (isSafe(x + 1, y, visited, maze, n)) {
        visited[x][y] = true;
        path += "D";
        solve(x + 1, y, maze, n, ans, visited, path);
        path.pop_back(); // backtrack
        visited[x][y] = false;
    }

    // L
    if (isSafe(x, y - 1, visited, maze, n)) {
        visited[x][y] = true;
        path += "L";
        solve(x, y - 1, maze, n, ans, visited, path);
        path.pop_back(); // backtrack
        visited[x][y] = false;
    }

    // R
    if (isSafe(x, y + 1, visited, maze, n)) {
        visited[x][y] = true;
        path += "R";
        solve(x, y + 1, maze, n, ans, visited, path);
        path.pop_back(); // backtrack
        visited[x][y] = false;
    }

    // U
    if (isSafe(x - 1, y, visited, maze, n)) {
        visited[x][y] = true;
        path += "U";
        solve(x - 1, y, maze, n, ans, visited, path);
        path.pop_back(); // backtrack
        visited[x][y] = false;
    }

}

vector<string> searchMaze(const vector<vector<int>> &maze, int n) {
    vector<string> ans;
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    string path = "";

    solve(0, 0, maze, n, ans, visited, path);
    return ans;
}

int main() {

    vector<vector<int>> maze = {
        {1, 0, 0, 0},
        {1, 1, 0, 0},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };

    vector<string> paths = searchMaze(maze, 4);
    for (string &path : paths) {
        cout << path << endl;
    }

    return 0;
}
