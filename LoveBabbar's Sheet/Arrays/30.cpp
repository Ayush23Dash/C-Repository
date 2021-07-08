#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;

class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin(),a.end());
    long long ans=LLONG_MAX,i=0,j=m-1;
    while(j<a.size())
    {
        ans = min(ans,a[j]-a[i]);
        i++;
        j++;
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

    long long t;
    cin>>t;
    while (t--)
    {
        long long n;
        cin>>n;
        vector<long long>a;
        long long x;
        for(long long i=0;i<n;i++)
        {
            cin>>x;
            a.push_back(x);
        }
        long long m;
        cin>>m;
        Solution ob;
        cout<<ob.findMinDiff(a,n,m)<<endl;
        
    }
    
return 0;
}