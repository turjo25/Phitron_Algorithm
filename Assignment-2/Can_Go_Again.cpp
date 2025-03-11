#include <bits/stdc++.h>
using namespace std;
class Edge
{
public:
    int a, b, c;
    Edge(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};
long long int dis[10005];
vector<Edge> edge_list;
int n, e;

bool bellman_ford()
{
    for (int i = 1; i <= n - 1; i++)
    {
        for (auto ed : edge_list)
        {
            int a = ed.a;
            int b = ed.b;
            int c = ed.c;
            if (dis[a] != LLONG_MAX && dis[a] + c < dis[b])
                dis[b] = dis[a] + c;
        }
    }

    bool cycle = false;

    for (auto ed : edge_list)
    {
        int a = ed.a;
        int b = ed.b;
        int c = ed.c;
        if (dis[a] != LLONG_MAX && dis[a] + c < dis[b])
        {
            cycle = true;
            break;
        }
    }
    // if (cycle)
    // {
    //     cout << "Negative Cycle Detected" << endl;
    // }
    return cycle;
}

int main()
{
    cin >> n >> e;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        edge_list.push_back({Edge(a, b, c)});
        // edge_list.push_back({Edge(b, a, c)});
    }
    for (int i = 1; i <= n; i++)
    {
        dis[i] = LLONG_MAX;
    }
    int src, q;
    cin >> src >> q;
    dis[src] = 0;

    bellman_ford();
    
    if (bellman_ford())
    {
        cout << "Negative Cycle Detected" << endl;
    }
    else
    {
        while (q--)
        {
            int des;
            cin >> des;
            if (dis[des] == LLONG_MAX)
            {
                cout << "Not Possible" << endl;
            }
            else
            {
                cout << dis[des] << endl;
            }
        }
    }

    return 0;
}