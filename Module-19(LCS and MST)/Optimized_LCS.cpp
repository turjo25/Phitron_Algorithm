#include <bits/stdc++.h>
using namespace std;
string a, b;
int dp[1005][1005];
int lcs(int i, int j)
{
    if (i < 0 || j < 0)
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];
    if (a[i] == b[j])
    {                                            // jde last 2 ta char mile
        return dp[i][j] = lcs(i - 1, j - 1) + 1; // mile gele previous element e jabo
    }
    else
    {                                    // jde na mile
        int op1 = lcs(i - 1, j);         // first sting theke akta value bad
        int op2 = lcs(i, j - 1);         // Second string theke akta vale bad
        return dp[i][j] = max(op1, op2); // 2 tar moddhe max return hbe
    }
}
int main()
{
    memset(dp,-1,sizeof(dp));
    cin >> a >> b;
    int n = a.size();
    int m = b.size();
    cout << lcs(n - 1, m - 1) << endl;
    return 0;
}