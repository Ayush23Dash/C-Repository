#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;

class Solution{
    public:
    int doUnion(int a[],int n,int b[],int m)
    {
        map<int,int>mp;
        for(int i=0;i<n;i++) mp[a[i]]++;
        for(int i=0;i<m;i++) mp[b[i]]++;
        
        return mp.size();
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
        int n,m;
        cin>>n>>m;
        int a[n],b[m];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<m;i++) cin>>b[i];
        Solution ob;
        cout<<ob.doUnion(a,n,b,m)<<endl;
    }
    
return 0;
}