#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m;
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int c[n + m];
    int i = 0, j = 0, curr = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            c[curr++] = a[i++];
            // i++;
            // curr++;
        }
        else
        {
            c[curr++] = b[j++];
            // j++;
            // curr++;
        }
    }
    while (i < n)
    {
        c[curr++] = a[i++];
        // i++;
        // curr++;
    }
    while (j < m)
    {
        c[curr++] = b[j++];
        // j++;
        // curr++;
    }
    for (int i = 0; i < n+m; i++)
    {
        cout<<c[i]<<" ";
    }
    

    return 0;
}