#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    unordered_map<int,int> m;
    for(auto& x : a)
    {
        cin>>x;
        m[x]++;
    }
        int res = 0;
    for(int i = 1 ; i <= n ; i++)
    {
        int count = 0;
        for(int j = 1; j <= sqrt(i) ; j++)
        {
            if(i % j == 0)
            {
                count += m[j];
                if(j != i / j)
                    count += m[i / j];
            }
        }
        // cout<<count<<endl;
        res = max(res,count);
    }
    cout<<res;

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