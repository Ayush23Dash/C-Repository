#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;
class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
sort(arr,arr+n);
int ans = arr[n-1] - arr[0];
for(int i=0;i<n;i++)
{
    if(arr[i+1]<k)
    continue;
    int curMin,curMax;
    curMin = min(arr[0] + k, arr[i+1]-k);
    curMax = max(arr[i]+k,arr[n-1]-k);
    ans = min(ans,curMax-curMin);
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
     int n,k;
     cin>>k;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
     }
     Solution ob;
     auto ans = ob.getMinDiff(arr,n,k);
     cout<<ans;
 }
return 0;
}
