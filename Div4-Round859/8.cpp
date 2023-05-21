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
        unsigned long long sum = a[0];
        for(int i = 1; i < a.size() ;i++)
        {
            if(a[i] > sum)
            {
                cout<<"no";
                flag = false;
                break;
            }
            sum += a[i];
        }
        if(flag)
            cout<<"yes";
        cout<<endl;
    }
}