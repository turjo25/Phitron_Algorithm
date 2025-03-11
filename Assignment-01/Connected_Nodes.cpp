#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> adj_list[n];
    vector<int> node;
    while (e--)
    {

        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
        node.push_back(a);
        node.push_back(b);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        bool flag = false;
        for (int i = 0; i < node.size(); i++)
        {
            if (x == node[i])
            {
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            cout << "-1" << endl;
        }
        else
        {
            vector<int> v;
            for (int con : adj_list[x])
            {
                v.push_back(con);
            }
            sort(v.begin(), v.end(), greater<int>());
            for (int val : v)
            {
                cout << val << " ";
            }
            cout << endl;
        }
    }

    return 0;
}