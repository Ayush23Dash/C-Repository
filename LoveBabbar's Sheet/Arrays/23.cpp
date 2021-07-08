#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;

class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(int *arr, int n) {
	    // code here
	   long long product=arr[0],mi = arr[0],ma=arr[0];
	   for(int i=1;i<n;i++)
	   {
	       if(arr[i]<0)
	       {
	           swap(ma,mi);
	       }
	       ma = max((long long)arr[i],ma*arr[i]);
	       mi = min((long long)arr[i],mi*arr[i]);
	       if(ma>product) product=ma;
	   }
	   return product;
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
        int n,i;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        Solution ob;
        auto ans = ob.maxProduct(arr,n);
        cout<<ans<<"\n";
    }
    
return 0;
}