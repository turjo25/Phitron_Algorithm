#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        // cout<<s1<<" "<<s2<<endl;
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        //cout << s1 << " " << s2 << endl;
        if(s1!=s2){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }

    return 0;
}