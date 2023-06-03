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
        int temp = 0;
        for(int i = 0 ; i <= n -3 ; i++)
        {
            temp ^= i;
        }
        if(temp != 0)
        {
            for(int i = 0 ; i <= n - 3; i++)
                cout<<i<<" ";
            cout<<INT_MAX<<" "<<(temp ^ INT_MAX);
        }
        else
        {
            int temp = 0;
            for(int i = 1; i <= n - 2 ; i++)
            {
                temp ^= i;
                cout<<i<<" ";
            }
            cout<<INT_MAX<<" "<<(INT_MAX ^ temp); 
        }
        cout<<endl;
    }
}