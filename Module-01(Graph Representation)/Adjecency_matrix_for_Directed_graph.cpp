#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    int adj_mat[n][e];

    // shobgula value 0 diye initialize kori
    //  for (int i = 0; i < n; i++)
    //  {
    //      for (int j = 0; j < n; j++)
    //      {
    //          adj_mat[i][j] = 0;
    //      }
    // }
    // shortcut
    memset(adj_mat, 0, sizeof(adj_mat));


    // diagonal elemant gula 1 kore dei
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i==j)
            adj_mat[i][j] = 1;
        }
    }

    // value input nei
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        adj_mat[a][b] = 1;
    }

    // print kori
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << adj_mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}