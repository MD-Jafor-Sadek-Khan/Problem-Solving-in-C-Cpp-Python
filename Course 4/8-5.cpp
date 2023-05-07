#include <bits/stdc++.h>

using namespace std;

const int N = 2000;
int row, column;
int grid[N][N] = {};
vector<int> visited;

void BFS(pair<int, int> src)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            
        }
    }
}

int main()
{

    cin >> row >> column;

    pair<int, int> src, destination;

    string str;

    for (int i = 0; i < row; i++)
    {
        cin >> str;
        for (int j = 0; j < str.length; j++)
        {
            if (str[j] == "#")
            {
                grid[i][j] = -1;
            }
            else if (str[j] = "A")
            {
                src = {i, j};
            }
            else if (str[j] = "B")
            {
                destination = {i, j};
            }
        }
    }

    BFS(src);
}