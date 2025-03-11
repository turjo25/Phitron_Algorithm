#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin >> n;
    ll tetra[n];
    tetra[0] = 0;
    tetra[1] = 1;
    tetra[2] = 1;
    tetra[3] = 2;
    for (int i = 4; i <= n; i++)
    {
        tetra[i] = tetra[i - 1] + tetra[i - 2] + tetra[i - 3] + tetra[i - 4];
    }
    cout << tetra[n] << endl;
    return 0;
}