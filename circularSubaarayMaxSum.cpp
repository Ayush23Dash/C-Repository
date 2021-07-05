//Code for "https://practice.geeksforgeeks.org/problems/max-circular-subarray-sum-1587115620/1"
#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;

class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    int kadane(int nums[],int n)
    {
        
        int counter=0;
        int curSum=0,maxSum=INT_MIN,maximum=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(nums[i]<0) counter++;
            maximum = max(maximum,nums[i]);
            curSum+=nums[i];
            if(curSum>maxSum) maxSum = curSum;
            if(curSum<0) curSum=0;
        }
        if(counter==n) return maximum;
        return maxSum;
    }
    int circularSubarraySum(int arr[], int n){
        
        // your code here
        // int n = sizeof(arr);
        // int count
        // int maximum = kadane(arr,n);
        // int sum=0;
        // for(int i=0;i<n;i++) sum+=arr[i];
        // for(int i=0;i<n;i++) arr[i]*=-1;
        
        // int maxDif = kadane(arr,n);
        // int ans = sum + maxDif;
        // return maximum;
        // return max(maximum,ans);
         int maxSum = kadane(arr,n);
        int sum=0;
        
        int counter=0,maximum=INT_MIN;
        for(int i=0;i<n;i++) sum+=arr[i];
        for(int i=0;i<n;i++)
        {
            if(arr[i]<0) counter++;
            maximum = max(maximum,arr[i]);
        }
        if(counter==n) return maximum;
        for(int i=0;i<n;i++) arr[i]*=-1;
        
        int diff = kadane(arr,n);
        
        int ans = sum + diff;
        
    return max(maxSum,ans);
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
        int num;
        cin>>num;
        int arr[num];
        for(int i=0;i<num;i++) cin>>arr[i];

        Solution ob;
        cout<<ob.circularSubarraySum(arr,num)<<endl;
    }
    

return 0;
}