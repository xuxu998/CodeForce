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
        vector<char> a(n);
        vector<char> b(n);
        for(auto& x : a) cin>>x;
        for(auto& x : b) cin>>x;
        bool flag = true;
        for(int i = 0 ; i < n ; i++)
        {
            if(a[i] == 'R' and b[i] != 'R')
            {
                flag = false;
                break;
            }
            if(a[i] == 'G' and b[i] == 'R')
            {
                flag = false;
                break;
            }
            if(a[i] == 'B' and b[i] == 'R')
            {
                flag = false;
                break;
            }
        }
        if(!flag)
            cout<<"no";
        else
            cout<<"yes";
        cout<<endl;
    }
}