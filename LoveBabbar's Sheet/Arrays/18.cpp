#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
            
        //     int ans=0;
        //     int ja[n-1];
        //     int j=0;
        //     for(int i=1;i<n;i++)
        //     {
        //         ja[j]=arr[i];
        //         j++;
        //     }
        //     int k=0;
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=i+1;j<n;j++)
        //     {
        //         if(arr[i]+arr[j]==k) ans++;
        //     }
        // }
        // return ans;
        
        map<int,int>m;
        for(int i=0;i<n;i++) m[arr[i]]++;
        int twice_count=0;
        for(int i=0;i<n;i++)
        {
            int diff = k-arr[i];
            twice_count+=m[diff];
            if(diff==arr[i]) twice_count--;
        }
        return twice_count/2;
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
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        Solution ob;
        auto ans = ob.getPairsCount(arr,n,k);
        cout<<ans<<"\n";
    }
    
return 0;
}