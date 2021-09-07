#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // your code here
    //      int targetFrequency = size/2;
    // int temp=-1;
    // map<int,int>mp;
    // for(int i=0;i<size;i++) mp[a[i]]++;
    // for(auto it:mp)
    // {
    //     if(it.second>targetFrequency)
    //     {
    //         temp=it.first;
    //     }
    // }
    // return temp;
    
    //Moore's Voting Algorithm
    int targetFrequency = size/2;
    int count =0;
    int ans=INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(count ==0)
        {
            ans = a[i];
            count++;
        }
        else if(a[i]==ans) count++;
        else if(a[i]!=ans) count--;
    }
    if(count>0) return ans;
    else return -1;
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
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution obj;
        cout<<obj.majorityElement(arr,n)<<endl;
    }
return 0;
}