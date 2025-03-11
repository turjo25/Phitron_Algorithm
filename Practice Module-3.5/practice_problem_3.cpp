#include<bits/stdc++.h>
using namespace std;
vector<int>adj_list[1005];
bool vis[1005];
vector<int>v;
int dfs(int src)
{
    v.push_back(src);

    vis[src] = true;
    for (int child : adj_list[src])
    {
        
        if (!vis[child])
        {
            dfs(child);
        }
    }
    return v.size();
}
int main()
{
    int n,e;
    cin>>n>>e;
    while (e--)
    {
        int a,b;
        cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);

    }
    memset(vis,false,sizeof(vis));
    int count = 0;
    vector<int>v1;
    for (int i = 0; i < n; i++)
    {
        if(vis[i]==false){
            v1.push_back(dfs(i));
            v.erase(v.begin(),v.end());
        }
    }
    sort(v1.begin(),v1.end());
    for(int x : v1){
        cout<<x<<" ";
    }
    

    return 0;
}