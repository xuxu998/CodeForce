#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a + b >= 10 or a + c >= 10 or b + c >= 10)
    {
        cout<<"Yes\n";
        return;
    }
    cout<<"No\n";
    
}
int main()
{
    int ntest;
    cin>>ntest;
    while(ntest--)
    {
        solve();
    }
}