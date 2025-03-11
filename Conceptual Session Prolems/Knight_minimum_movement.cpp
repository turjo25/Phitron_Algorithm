#include <bits/stdc++.h>
using namespace std;

char grid[8][8];
bool vis[8][8];
int level[8][8];
vector<pair<int, int>> d = {{2, -1}, {1, -2}, {-1, -2}, {-2, -1}, {-2, 1}, {2, 1}, {1, 2}, {-1, 2}};//knight er movement - 8 ta move krbe

int n, m;

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;

    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    level[si][sj] = 0;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;

        // cout << par_i << " " << par_j << endl;

        for (int i = 0; i < 4; i++)
        {
            int ci = par_i + d[i].first;
            int cj = par_j + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj])
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[par_i][par_j] + 1;
            }
        }
    }
}

int main()
{

    n= 8;
    m = 8;
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    string source,destination;
    cin>>source>>destination;
    int si, sj, di, dj;
    si = source[1]-'1';
    sj = source[0]-'a';
    di = destination[1]-'1';
    dj = destination[0]-'a';
   

    cout << level[di][dj] << endl;

    return 0;
}