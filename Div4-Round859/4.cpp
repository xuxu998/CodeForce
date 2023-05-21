#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ntest;
    cin>>ntest;
    while(ntest--)
    {
        int n,q;
        cin>>n>>q;
        vector<int> a(n);
        for(auto& x : a) cin>>x;
        vector<unsigned long long> pre_sum(n);
        pre_sum[0] = a[0];
        for(int i = 1 ; i < n ; i++)
        {
            pre_sum[i] = pre_sum[i - 1] + a[i];
        }
        while(q--)
        {
            int l,r,k;
            cin>>l>>r>>k;
            unsigned long long replaced_sum = (r - l + 1) * k;
            unsigned long long new_sum = pre_sum[n - 1] - (pre_sum[r - 1] - pre_sum[l - 1] + a[l - 1]) + replaced_sum;
            if(new_sum % 2 == 1)
                cout<<"yes\n";
            else
                cout<<"no\n";
        }
        cout<<endl;
    }
}