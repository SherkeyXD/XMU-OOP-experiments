#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> result;
int n, m = 0;

bool check(int row, int col, vector<string>& chessboard, int n) {
    for (int i = 0; i < row; i++) 
        if (chessboard[i][col] == 'Q')
            return false;
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
        if (chessboard[i][j] == 'Q')
            return false;
    for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) 
        if (chessboard[i][j] == 'Q')
            return false;
    return true;
}

void backtracking(int n, int row, vector<string>& chessboard) {
    if (n == row) {
        m++;
        result.push_back(chessboard);
        return;
    }
    for (int col = 0; col < n; col++) {
        if (check(row, col, chessboard, n)) {
            chessboard[row][col] = 'Q';
            backtracking(n, row + 1, chessboard);
            chessboard[row][col] = '.';
        }
    }
}

void solveNQueens(int n) {
    result.clear();
    vector<string> chessboard(n,string(n,'.'));
    backtracking(n, 0, chessboard);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            cout << result[i][j].find("Q")+1;
        cout << endl;
    }
}

int main()
{
    cin >> n;
    solveNQueens(n);
    return 0;
}