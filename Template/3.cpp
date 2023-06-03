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
        int p1 = 0,p2 = 0,p3 = 0;
        unordered_map<string,int> m;
        vector<string> a[3];
        for(int i = 0 ; i < n * 3 ; i++)
        {
            string s;
            cin>>s;
            a[i / n].push_back(s);
            m[s]++;
        }
        for(auto i : a[0])
        {
            if(m[i] == 1)
                p1 += 3;
            else if(m[i] == 2)
                p1 += 1;
        }
        for(auto i : a[1])
        {
            if(m[i] == 1)
                p2 += 3;
            else if(m[i] == 2)
                p2 += 1;
        }
        for(auto i : a[2])
        {
            if(m[i] == 1)
                p3 += 3;
            else if(m[i] == 2)
                p3 += 1;
        }
        cout<<p1<<" "<<p2<<" "<<p3;
        cout<<endl;
    }
}