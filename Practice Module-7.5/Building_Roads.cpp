#include <bits/stdc++.h>
using namespace std;
bool vis[100005];
vector<int> adj_list[100005];
void dfs(int src)
{
    vis[src] = true;
    for (int child : adj_list[src])
    {
        if (!vis[child])
        {
            dfs(child);
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
    vector<int>nodes;
    for (int i = 1; i <= n; i++)
    {
        if(!vis[i]){
        dfs(i);
        nodes.push_back(i);
        }
    }
    
    cout<<nodes.size()-1<<endl;
    for (int i = 0; i < nodes.size()-1; i++)
    {
        cout<<nodes[i]<<" "<<nodes[i+1]<<endl;
    }
    

    return 0;
}