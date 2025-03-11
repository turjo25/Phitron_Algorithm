#include <bits/stdc++.h>
using namespace std;

const int MAX_NODES = 100001;  // Adjusted for large input
vector<int> adj_list[MAX_NODES];
bool vis[MAX_NODES];
int level[MAX_NODES];
int parent[MAX_NODES];

void bfs(int src) {
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    parent[src] = -1;

    while (!q.empty()) {
        int par = q.front();
        q.pop();

        for (int child : adj_list[par]) {
            if (!vis[child]) {
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;
                parent[child] = par;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, e;
    cin >> n >> e;

    for (int i = 0; i < e; i++) {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    memset(parent, -1, sizeof(parent));

    int source = 1, destination = n;
    bfs(source);

    vector<int> path;
    int node = destination;
    while (node != -1) {
        path.push_back(node);
        node = parent[node];
    }
    reverse(path.begin(), path.end());

    if (!vis[destination]) {
        cout << "IMPOSSIBLE\n";
    } else {
        cout << path.size() << "\n";
        for (int x : path) {
            cout << x << " ";
        }
        cout << "\n";
    }

    return 0;
}
