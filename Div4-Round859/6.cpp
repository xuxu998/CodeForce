#include <bits/stdc++.h>
using namespace std;
int dir_to_index(string s)
{
    if(s == "DL")
        return 0;
    else if(s == "DR")
        return 1;
    else if(s == "UL")
        return 2;
    else
        return 3;
}
void helper(const int& no_row, const int& no_column, int start_x, int start_y, const int &target_x, const int &target_y,string dir,int &bounce,bool& reachable,vector<vector<vector<bool>>>& f)
{
    bool hit_wall = false;
    if(start_x == target_x and start_y == target_y)
    {
        reachable = true;
        return;
    }
    if(f[start_x][start_y][dir_to_index(dir)] == true)
        return;
    f[start_x][start_y][dir_to_index(dir)] = true;
    if(start_x == 1 and dir[0] == 'U'  )
    {
        dir[0] = 'D',hit_wall = true;
    }
    if(start_x == no_row and dir[0] == 'D'  )
    {
        dir[0] = 'U',hit_wall = true;
    }
    if(start_y == 1 and dir[1] == 'L'  )
    {
        dir[1] = 'R',hit_wall = true; 
    }
    if(start_y == no_column and dir[1] == 'R'  )
    {
        dir[1] = 'L',hit_wall = true; 
    }
    if(hit_wall)
        bounce++;
    start_x = dir[0] == 'U' ? start_x - 1 : start_x + 1;
    start_y = dir[1] == 'R' ? start_y + 1 : start_y - 1;
    helper(no_row,no_column,start_x,start_y,target_x,target_y,dir,bounce,reachable,f);

}
int main()
{
    int ntest;
    cin>>ntest;
    while(ntest--)
    {
        int n,m,i1,j1,i2,j2;
        string dir;
        cin>>n>>m>>i1>>j1>>i2>>j2;
        cin>>dir;
        bool flag = false;
        int res = 0;
        vector<vector<vector<bool>>> f(n + 1, vector<vector<bool>> (m + 1 , vector<bool> (4,false)));
        helper(n,m,i1,j1,i2,j2,dir,res,flag,f);
        if(flag)
            cout<<res;
        else
            cout<<-1;
        cout<<endl;
    }
}