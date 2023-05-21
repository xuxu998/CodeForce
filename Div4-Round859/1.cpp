#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ntest;
    cin>>ntest;
    while(ntest--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a + b == c)
        {
            cout<<"+\n";
            continue;
        }
        cout<<"-\n";
    }
}