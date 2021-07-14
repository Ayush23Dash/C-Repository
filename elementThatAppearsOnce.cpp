//Solution for "https://practice.geeksforgeeks.org/problems/element-appearing-once2552/1#"
#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;

class Solution{
public:	
	int search(int A[], int N){
	    //code
	    int ans= A[N-1];
	    for(int i=0;i<N-1;i++)
	    {
	        if(A[i]==A[i+1])
	        {
	            i++;
	        }else{
	            ans = A[i];
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

    int t,len;
    cin>>t;
    while (t--)
    {
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++) cin>>arr[i];
        Solution ob;
        cout<<ob.search(arr,len)<<"\n";
    }
return 0;
}