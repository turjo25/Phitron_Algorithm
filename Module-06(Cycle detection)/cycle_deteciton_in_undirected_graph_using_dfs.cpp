#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[100005];
bool vis[100005];
int parent[100005];
bool cycle;
void dfs(int src)
{

    vis[src] = true;

    for (int child : adj_list[src])
    {
        if (vis[child] && parent[src] != child)
        {
            cycle = true;
        }
        if (!vis[child])
        {
            parent[child] = src;
            dfs(child);
            //recursion er age parent child niye kaj krte hbe nahole jekono 2 ta connected node k cycle detect krbe dfs
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));
    cycle = false;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
            dfs(i);
    }
    if (cycle)
        cout << "Cycle detected" << endl;
    else
        cout << "No cycle" << endl;

    return 0;
}