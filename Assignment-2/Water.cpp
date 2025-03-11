#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long int arr[n];
        int mx = LLONG_MIN;
        int idx1, idx2;
        vector<int> idx;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (mx <= arr[i])
            {
                mx = arr[i];
                idx1 = i;
            }
        }

        int mx2 = LLONG_MIN;
        for (int i = 0; i < n; i++)
        {
            if (mx2 <= arr[i] && i != idx1)
            {
                mx2 = arr[i];
                idx2 = i;
            }
        }
        idx.push_back(idx1);
        idx.push_back(idx2);
        sort(idx.begin(), idx.end());
        for (int i = 0; i < idx.size(); i++)
        {
            cout << idx[i] << " ";
        }
        cout << endl;
    }

    return 0;
}