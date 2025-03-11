#include<bits/stdc++.h>
using namespace std;
bool canReach(long long n, long long current = 1) {
    if (current == n) return true;
    if (current > n) return false;
    
    return canReach(n, current * 10) || canReach(n, current * 20);
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout << (canReach(n) ? "YES" : "NO") << endl;
    }
}

int main() {
    solve();
    return 0;
}