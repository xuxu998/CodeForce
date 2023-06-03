#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ntest;
    cin>>ntest;
    while(ntest--)
    {
        int n;
        string s;
        cin>>n>>s;
        vector<bool> mark(5,false);
        if(s.size() == 5)
        {
            bool flag = false;
            for(int i = 0 ; i < 5 ; i++)
            {
                if(s[i] == 'T')
                    mark[0] = true;
                else if(s[i] == 'i')
                    mark[1] = true;
                else if(s[i] == 'm')
                    mark[2] = true;
                else if(s[i] == 'u')
                    mark[3] = true;
                else if(s[i] == 'r')
                    mark[4] = true;
                else
                {
                    cout<<"no\n";
                    flag = true;
                    break;
                } 
            }
            if(!flag)
            {
                bool temp = false;
                for(int i = 0 ; i < 5 ; i++)
                {
                    if(mark[i] == false)
                    {
                        cout<<"no\n";
                        temp = true;
                        break;
                    }
                }
                if(!temp)
                    cout<<"yes\n";
            }
            continue;
        }
        cout<<"no";
        cout<<endl;
    }
}