

 // } Driver Code Ends
class Solution{
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

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends