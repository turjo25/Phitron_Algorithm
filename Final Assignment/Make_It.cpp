#include <bits/stdc++.h>
using namespace std;
int dp[100000 + 5];
bool canReach(int start, int target) 
{
    if (start == target)
        return true;
    if (start > target)
        return false;

    if (dp[start] != -1)
        return dp[start];

    dp[start] = canReach(start + 3, target) || canReach(start * 2, target);
    return dp[start];
}

int main()
{
   
    int t;
    cin >> t;
    while (t--)
    {
        memset(dp, -1, sizeof(dp));
        int n;
        cin >> n;

        if (canReach(1, n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}