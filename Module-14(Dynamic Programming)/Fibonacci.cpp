#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
    if (n < 2)
    {
        return n;
    }
    return fibo(n - 1)+fibo(n - 2);
}
int main()
{
    cout<<fibo(9)<<endl;
    return 0;
}