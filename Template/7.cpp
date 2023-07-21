#include <bits/stdc++.h>
using namespace std;
bool valid(const pair<int,int>& a, const pair<int,int>& b)
{
    
}
void solve()
{
    int n;
    cin>>n;
    vector<pair<int,int>> a(n);
    for(auto& x : a)    cin>>x.first>>x.second;
    int count = 0;
    for(int i = 0 ; i < n ; i ++)
    {
        for(int j = i + 1; j < n ; j++)
        {
            if(valid(a[i],a[j]))
                count += 2;
        }
    }
    cout<<count;

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