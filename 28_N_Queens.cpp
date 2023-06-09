#include <bits/stdc++.h>

using namespace std;

void addSol(vector<vector<int>> &ans, vector<vector<int>> &board, int n)
{
    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n; k++)
        {
            temp.push_back(board[i][k]);
        }
    }
    ans.push_back(temp);
    temp.clear();
}

bool isSafe(int row, int col, vector<vector<int>> &board, int n)
{
    int x = row;
    int y = col;

    // check for same row
    while (y >= 0)
    {
        if (board[x][y] == 1)
        {
            return false;
        }
        y--;
    }

    x = row;
    y = col;

    // check for upper diagonaal
    while (x >= 0 && y >= 0)
    {
        if (board[x][y] == 1)
        {
            return false;
        }
        x--;
        y--;
    }

    x = row;
    y = col;

    // check for lower diagonaal
    while (x < n && y >= 0)
    {
        if (board[x][y] == 1)
        {
            return false;
        }
        x++;
        y--;
    }

    return true;
}
void solve(int col, vector<vector<int>> &ans, vector<vector<int>> &board, int n)
{
    if (col == n)
    {
        addSol(ans, board, n);
        // cout <<"SOl add"<<endl;
        return;
    }
    cout << "col val :" << col << endl;

    for (int row = 0; row < n; row++)
    {
        if (isSafe(row, col, board, n))
        {

            // cout << row << " " << col << endl;
            board[row][col] = 1;
            solve(col + 1, ans, board, n);
            board[row][col] = 0;
        }
    }
}
vector<vector<int>> solveNQueens(int n)
{
    vector<vector<int>> board(n, vector<int>(n, 0));

    vector<vector<int>> ans;

    solve(0, ans, board, n);

    return ans;
}
int main()
{
    vector<vector<int>> ans;
    int n = 4;
    ans = solveNQueens(n);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}