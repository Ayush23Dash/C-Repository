#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;
class Solution {
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n){
        
        // Your code here
        // int max=0,sum;
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=i;j<n;j++)
        //     {
        //         for(int k=i;k<j;k++)
        //         {
        //              sum=0;
        //             sum+=arr[k];
        //         }
        //         if(sum>max) max = sum;
        //     }
        // }
        // return max;
        
        int curSum=0,maxSum=0,counter=0,maximum=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<0) counter++;
            maximum=max(maximum,arr[i]);
        }
        if(counter==n)
        {
            return maximum;
        }else{
            for(int i=0;i<n;i++)
            {
                curSum+=arr[i];
                if(curSum>maxSum)
                maxSum = curSum;
                if(curSum<0)
                curSum=0;
            }
        }
        return maxSum;
    }
};
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        Solution ob;
        cout<<ob.maxSubarraySum(a,n)<<endl;
    }

return 0;
}