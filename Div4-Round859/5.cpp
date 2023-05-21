#include <bits/stdc++.h>
using namespace std;
int ask(int low ,int high)
{
    int ans;
    string s = "? " + to_string(high - low + 1);
    for (int i = low ; i <= high ; i++)
    {
        s += (" " + to_string(i));
    }
    cout<<s<<endl;
    cout.flush();
    cin>>ans;
    return ans;
}
int main()
{
    int ntest;
    cin>>ntest;
    while(ntest--)
    {
        int n;
        cin>>n;
        vector<int> a(n + 1);
        vector<int> pre_sum(n + 1,0);
        for(int i = 1; i <= n ; i++)
            cin>>a[i];
        pre_sum[1] = a[1];
        for(int i = 2 ; i <= n; i ++)
        {
            pre_sum[i] = pre_sum[i - 1] + a[i];
        }
        int low = 1, high = n;
        while(low < high)
        {
            int mid = (low + high) / 2;
            int res1 = ask(low,mid);
            if(res1 != (pre_sum[mid] - pre_sum[low] + a[low]))
            {
                high = mid;
            }
            else
            {
                low = mid + 1;
            }
        }
        cout<<"! "<<high<<endl;
        cout<<endl;
    }
    
}