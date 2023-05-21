#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ntest;
    cin>>ntest;
    while(ntest--)
    {
        int n;
        vector<int> mark1(26,-1);
        vector<int> mark2(26,-1);
        cin>>n;
        string s;
        cin>>s;
        if(n == 1)
        {
            cout<<"yes\n";
            continue;
        }
        bool flag = false;
        bool res1 = true;
        bool res2 = true;
        vector<int> temp1;
        vector<int> temp2;
        while(temp1.size() != s.size())
        {
            if(flag)
            {
                temp1.push_back(0);
                temp2.push_back(1);
                flag = !flag;
            }
            else
            {
                temp1.push_back(1);
                temp2.push_back(0);
                flag = !flag;
            }
        }
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(mark1[s[i] - 97] == -1)
                mark1[s[i] - 97] = temp1[i];
            else
            {
                if(mark1[s[i] - 97] != temp1[i])
                {
                    res1 = false;
                    break;
                }
            }
        }
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(mark2[s[i] - 97] == -1)
                mark2[s[i] - 97] = temp2[i];
            else
            {
                if(mark2[s[i] - 97] != temp2[i])
                {
                    res2 = false;
                    break;
                }
            }
        }
        if(res1 or res2)
            cout<<"yes";
        else
            cout<<"no";
        cout<<"\n";
    }
}