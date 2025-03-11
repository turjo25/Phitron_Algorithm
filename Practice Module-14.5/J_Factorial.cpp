#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll fact(ll n){
    if(n==1){
        return 1;
    }
    ll mul = fact(n-1);
    return mul * n;
}
int main()
{
    ll n;
    cin>>n;
    cout<<fact(n);
    return 0;
}