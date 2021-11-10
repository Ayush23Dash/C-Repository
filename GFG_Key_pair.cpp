#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;

class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here
	   // for(int i=0;i<n;i++)
	   // {
	   //     for(int j=i+1;j<n;j++)
	   //     {
	   //         if(arr[i]+arr[j] == x) return true;
	   //     }
	   // }
	   // return false; 
	   
	   sort(arr,arr+n);
	   int i=0,j=n-1;
	   while(i<j)
	   {
	       if(arr[i]+arr[j]==x) return true;
	       else if(arr[i]+arr[j]<x) i++;
	       else j--;
	   }
	   return false;
	   
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
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        auto ans = ob.hasArrayTwoCandidates(arr,n,x);
        cout<<(ans?"Yes\n" : "No\n");
    }
    
return 0;
}