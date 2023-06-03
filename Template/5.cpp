#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ntest;
    cin>>ntest;
    while(ntest--)
    {
        vector<vector<long long>> a(1001, vector<long long> (1001,0));
        vector<vector<long long>> pre_sum(1001,vector<long long> (1001,0));
        int n,q;
        int x1,y1,x2,y2;
        cin>>n>>q;
        for(int i = 1; i <= n ;i++)
        {
            int x,y;
            cin>>x>>y;
            a[x][y] += x * y;
        }
        pre_sum[0][0] = a[0][0];
        for(int i = 1 ; i <= 1000 ; i++)
            pre_sum[0][i] = pre_sum[0][i - 1] + a[0][i];
        for(int i = 1; i <= 1000 ; i++)
            pre_sum[i][0] = pre_sum[i - 1][0] + a[i][0];
        for(int i = 1 ; i <= 1000; i ++)
        {
            for(int j = 1; j <= 1000 ; j++)
            {
                pre_sum[i][j] = pre_sum[i - 1][j] + pre_sum[i][j - 1] - pre_sum[i - 1][j - 1] + a[i][j];
            }
        }
        while(q--)
        {
            int x1,y1,x2,y2;
            cin>>x1>>y1>>x2>>y2;
            x1++;y1++;x2--;y2--;
            int count = 0;
            long long res = pre_sum[x2][y2];
            if(x1 > 0)
            {
                res -= pre_sum[x1 - 1][y2];
                count++;
            }
            if(y1 > 0)
            {
                res -= pre_sum[x2][y1 - 1];
                count++;
            }
            if(count == 2)
                res += pre_sum[x1 - 1][y1 - 1];
            cout<<res<<endl;
        }
    }
}