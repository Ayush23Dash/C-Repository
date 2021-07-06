#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;

class Solution{
  public:

    int sb(int arr[], int n, int x)
    {
        // Your code goes here   
        int i=0,j=0,size=n,sum=0;
        while(j<n && i<=j)
        {
            while(sum<=x && j<n)
            {
                sum+=arr[j++];
            }
            while(sum>x && i<j)
            {
                size = min(size,j-i);
                sum-=arr[i++];
            }
        }
        return size;
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
    while (t--)
    {
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        Solution obj;
        cout<<obj.sb(a,n,x)<<endl;
    }
    
return 0;
}