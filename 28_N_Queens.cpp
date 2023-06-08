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

bool isSafe(int row, int col, vector<vector<int>> &board, int n, map<int, bool> m)
{
    int x = row;
    int y = col; //      CHECK FOR SAME ROW
    while (y >= 0)
    {
        if (board[x][y] == 1)
            return false;
        y--;
    }
    x = row;
    y = col; //            CHECK FOR  LOWER DIAGONALS
    while (x >= 0 && y >= 0)
    {
        if (board[x][y] == 1)
            return false;
        y--;
        x--;
    }
    x = row;
    y = col;
    //            CHECK FOR UPPER DIAGONALS
    while (x < n && y >= 0)
    {
        if (board[x][y] == 1)
            return false;
        y--;
        x++;
    }
    return true;




    // cout<<"map print stat"<<endl;
    
    // int x = m.size();
    // for(int i = 0 ; i<x;i++){
    //     cout <<m[i]<<endl;
        
    // }cout<<"map print end"<<endl;
    // if (m[(row + col)] || m[row] ||m[(n - 1 + col - row)] )
    // {
    //     return false;
    // }
    
    // return true;
}

void solve(int col, vector<vector<int>> &ans, vector<vector<int>> &board, int n, map<int, bool> m)
{
    if (col == n)
    {
        addSol(ans, board, n);
        cout <<"SOl add"<<endl;
        return;
    }

    for (int row = 0; row < n; row++)
    {
        if (isSafe(row, col, board, n, m))
        {
            cout <<row<<" "<<col<<endl;
            board[row][col] = 1;
            m[row] = true;
            // cout <<"ROW : "<<row
            solve(col + 1, ans, board, n, m);
            // m[row] = false;
            // m.erase(row);
            board[row][col] = 0;
        }
    }
}
vector<vector<int>> solveNQueens(int n)
{
    vector<vector<int>> board(n, vector<int>(n, 0));
    map<int, bool> m;
    vector<vector<int>> ans;

    solve(0, ans, board, n, m);

    return ans;
}
int main()
{
    vector<vector<int>> ans;
   int n = 5;
    ans = solveNQueens(n);
    for(int i = 0 ; i<n;i++){
        for(int j = 0 ; j<n;j++){
            cout <<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}