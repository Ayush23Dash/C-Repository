#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;

class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        // code here
        vector<int> a;
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
               a.push_back(Mat[i][j]);
            }
        }
        sort(a.begin(),a.end());
        vector<vector<int>>ans(N,vector<int>(N));
        int index = 0;
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                ans[i][j] = a[index];
                index++;
            }
        }
        return ans;
    }
};
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        vector<vector<int>> v(N,vector<int>(N));
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                cin>>v[i][j];
            }
        }

        Solution ob;
        v = ob.sortedMatrix(N,v);
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++)
            {
                cout<<v[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
return 0;
}