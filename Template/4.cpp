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
        vector<long long> res;
        vector<int> l,r;
        for(auto& x: a) cin>>x;
        long long total = 0;
        for(int i = 0 ; i < n ; i++)
        {
            if(a[i] == 'L')
                total += i;
            else
                total += (n - i -1);
        }
        for(int i = n - 1; i >= 0 ; i--)
            if(a[i] == 'L')
                l.push_back(i);
        for(int i = 0 ; i < n ; i++)
            if(a[i] == 'R')
                r.push_back(i);
        for(int i = 1 ; i <= n ; i++)
        {
            if(!l.empty() and !r.empty() and n - l.back() - 1 > r.back())
            {
                total = max(total,total + n - l.back() - 1 - l.back());
                res.push_back(total);
                l.pop_back();
            }
            else if(!l.empty() and !r.empty() and n - l.back() - 1 <= r.back())
            {
                total = max(total,total + r.back() - (n - r.back() - 1));
                res.push_back(total);
                r.pop_back();
            }
            else if(!l.empty() and r.empty())
            {
                total = max(total,total + n - l.back() - 1 - l.back());
                res.push_back(total);
                l.pop_back();
            }
            else if(l.empty() and !r.empty())
            {
                total = max(total,total + r.back() - (n - r.back() - 1));
                res.push_back(total);
                r.pop_back();
            }
        }
        for(auto i : res)
            cout<<i<<" ";
        cout<<endl;
    }
}