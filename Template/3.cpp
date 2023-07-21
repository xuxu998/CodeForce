#include <bits/stdc++.h>
using namespace std;
void solve()
{
    vector<vector<char>> a(8, vector<char>(8));
    for(auto& x : a)
    {
        for(auto& ch : x)
            cin>>ch;
    }
    for(int i = 0 ; i < 8 ; i++)
    {
        string res = "";
        for(int j = 0 ; j < 8 ; j++)
        {
            res += a[j][i];
        }
        if(res != "........")
        {
            string temp;
            for(int i = 0 ; i < 8 ; i++)
            {
                if(res[i] != '.')
                    temp.push_back(res[i]);
            }
            cout<<temp;
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