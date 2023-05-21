#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ntest;
    cin>>ntest;
    while(ntest--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        bool flag = true;
        for(auto& x: a) cin>>x;
        sort(a.begin(),a.end());
        if(a[0] != 1)
        {
            cout<<"no"<<endl;
            continue;
        }
        vector<bool> f(5001,false);
        f[1] = true;
        for(int i = 1; i < n ; i++)
        {
            if(f[a[i]] == false)
            {
                cout<<"no";
                flag = false;
                break;
            }
            for(int j = 5000 ; j >= a[i] ; j--)
            {
                f[j] = f[j] | f[j - a[i]];
            }
        }
        if(flag)
            cout<<"yes";
        cout<<endl;
    }
}