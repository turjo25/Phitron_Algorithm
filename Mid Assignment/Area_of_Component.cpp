#include <bits/stdc++.h>
using namespace std;
int cnt;
char grid[1005][1005];
bool vis[1005][1005];
int level[1005][1005];
vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n, m;

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    if (grid[i][j] == '-')
        return false;
    return true;
}

void dfs(int si, int sj)
{
    vis[si][sj] = true;
    cnt++;
    for (int i = 0; i < 4; i++) {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) && !vis[ci][cj]) {
            dfs(ci, cj);
            vis[ci][cj] = true;
        }
    }
}

int main()
{

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    vector<int>v;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '.' && !vis[i][j]) {
                cnt = 0;
                dfs(i, j);
                v.push_back(cnt);
            }
        }
    }
    int mn = INT_MAX;
    if(v.empty()){
        cout<<"-1"<<endl;
    }else{
        for (int i = 0; i < v.size(); i++)
        {
            mn = min(mn,v[i]);
        }
        cout<<mn<<endl;
    }
    
}
