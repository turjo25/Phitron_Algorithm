#include <bits/stdc++.h>
using namespace std;
void rec(int n)
{
    if (n > 5)
    {
        return;
    }
    cout << n << endl;
    rec(n + 1);
}
int sum_rec(int n)
{
    if (n > 5)
    {
        return 0;
    }
    int sum = sum_rec(n + 1);
    return sum + n;
}
int fact(int n){
    if (n == 1)
    {
        return 1;
    }
    int mul = fact(n - 1);
    return mul * n;
}
int main()
{
    // rec(1);
    // cout<<sum_rec(1)<<endl; 
    cout<<fact(5)<<endl;
    return 0;
}