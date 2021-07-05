#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;

class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	   // int flag=0;
	   // if(n>m)
	   // {
	   //     flag++;
	   //     int *tempArr = arr1;
	   //     arr1=arr2;
	   //     arr2=tempArr;
	        
	   //     int temp=n;
	   //     n=m;
	   //     m=temp;
	   // }
	    
	        
	   //     int low1=0,low2=0;
	   //     while(low1<n)
	   //     {
	   //         if(arr1[low1]>arr2[low2])
	   //         {
	   //             swap(arr1[low1],arr2[low2]);
	   //             sort(arr2,arr2+m);
	                
	   //             low1++;
	   //         }
	   //         else if(arr1[low1]<arr2[low2])
	   //         {
	   //             low1++;
	   //         }
	   //         else 
	   //         {
	   //             low1++;
	   //         }
	   //     }

	   int i=0,j=0,k=n-1;
	   while(i<=k && j<m)
	   {
	       if(arr1[i]<arr2[j]) i++;
	       else
	       {
	           swap(arr1[k],arr2[j]);
	           j++;
	           k--;
	       }
	   }
	       sort(arr1,arr1+n);
	       sort(arr2,arr2+m);
	       
	      
	   
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
        int n,m,i;
        cin>>n>>m;
        int arr1[n],arr2[m];
        for(i=0;i<n;i++) cin>>arr1[i];
        for(i=0;i<m;i++) cin>>arr2[i];

        Solution ob;
        ob.merge(arr1,arr2,n,m);
        for(i=0;i<n;i++) cout<<arr1[i]<<" ";
        for(i=0;i<m;i++) cout<<arr2[i]<<" ";
        cout<<"\n";
    }
return 0;
}