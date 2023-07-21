#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(auto& x : a)    cin>>x;
    sort(a.begin(),a.end());
    vector<int> f(n);
    f[0] = 1;
    int temp = 0;
    for(int i = 1 ; i < n ; i++)
    {
        if(a[i] - a[i - 1] <= k)
            f[i] = f[i - 1] + 1;
        else
            f[i] = 1;
        temp = max(temp,f[i]);
    }
    if(temp != 0)
        cout<<n - temp;
    else
    {
        cout<<temp;
    }
    
}
int main()
{
    int ntest;
    cin>>ntest;
    while(ntest--)
    {
        solve();
        cout<<endl;
    }
}