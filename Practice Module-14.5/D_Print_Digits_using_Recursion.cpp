#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> v;
void get_digit(ll n)
{
    if (n == 0)
    {
        return;
    }
    ll digit = n % 10;
    v.push_back(digit);
    get_digit(n / 10);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        get_digit(n);
        if (v.empty())
        {
            cout << 0 << endl;
        }
        else
        {
            reverse(v.begin(), v.end());
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
            v.clear();
        }
    }

    return 0;
}