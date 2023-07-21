#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<pair<int,pair<int,int>>> a(n);
    for(int i = 0 ; i < n ; i++)
    {
        a[i].first = i;
        cin>>a[i].second.first>>a[i].second.second;
    }
    auto comp = [](pair<int,pair<int,int>>& a,pair<int,pair<int,int>>& b)
    {
        return a.second.second > b.second.second;
    };
    sort(a.begin(),a.end(),comp);
    for(int i = 0 ; i < n ; i++)
    {
        if(a[i].second.first <= 10)
        {
            cout<<a[i].first + 1;
            return;
        }
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