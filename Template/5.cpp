#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    unsigned long long c;
    cin>>n>>c;
    vector<int> a(n);
    unsigned long long sum = 0;
    unsigned long long sum_square = 0;
    for(auto& x : a)
    {
        cin>>x;
        sum += x;
        sum_square += x * x;
    }
    // cout<<sum<<" "<<sum_square<<endl;
    unsigned long long low = 1,high = INT_MAX;
    while(low <= high)
    {
        // cout<<low<<" "<<high<<endl;
        unsigned long long mid = (low + high) / 2;
        unsigned long long temp = 4 * n * mid +  4 * sum;
        // cout<<temp<<endl;
        if(temp == (c - sum_square) / mid)
        {
            cout<<mid;
            return;
        }
        else if(temp > (c - sum_square) / mid)
        {
            // cout<<"INC\n";
            high = mid - 1;
            // cout<<high<<endl;
        }
        else
        {
            // cout<<"DEC\n";
            low = mid + 1;
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