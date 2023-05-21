#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ntest;
    cin>>ntest;
    while(ntest--)
    {
        int mihai_sum = 0;
        int bianca_sum = 0;
        int n;
        cin>>n;
        for(int i = 0; i < n ; i++)
        {
            int temp;
            cin>>temp;
            if(temp % 2 == 0)
                mihai_sum+=temp;
            else
                bianca_sum+=temp;
        }
        if(mihai_sum > bianca_sum)
            cout<<"yes";
        else
            cout<<"no";
        cout<<"\n";
    }
}