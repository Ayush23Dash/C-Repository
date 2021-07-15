#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int r,c;
    cin>>r>>c;
    vector<vector<int>>mat(r,vector<int>(c));
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>mat[i][j];
        }
    }

    map<int,int>m;
    int count=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            //Add non-duplicate elements from each row to map
            if(m[mat[i][j]]==count)
            {
                m[mat[i][j]]++;
            }else continue;
        }
        count++;
    }
    for(auto it:m)
    {
        if(it.second==r) cout<<it.first<<" ";
    }
    

return 0;
}