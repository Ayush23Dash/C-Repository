#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;
// int leftGreater(int arr[],int k)
// {
//     int maximum=arr[k];
//     for(int i=(k-1);i>=0;i--)
//     {
//         if(arr[i]>arr[k])
//         {
//             maximum = max(maximum,arr[i]);
//         }
//     }
    
//     if(maximum==INT_MIN)
//     return 0;
//     return maximum;
// }
// int rightGreater(int arr[],int n,int k)
// {
//     int maximum=arr[k];
//     for(int i=k+1;i<n;i++)
//     {
//         if(arr[i]>arr[k])
//         {
//             maximum = max(maximum,arr[i]);
//         }
//     }
//     if(maximum==INT_MIN)
//     return 0;
//     return maximum;
// }
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    int trappingWater(int arr[], int n){
        // Code here
        // int water=0;
        // int leftG,rightG;
        // for(int i=1;i<n-1;i++)
        // {
        //      leftG = leftGreater(arr,i);
        //     if(leftG==0) continue;
        //     else{
        //          rightG = rightGreater(arr,n,i);
        //         int minimum = min(leftG,rightG);
        //         water+=(minimum-arr[i]);
        //     }
        // }
        // return water;
        int left[n],right[n],water=0;
        left[0]=arr[0];
        for(int i=1;i<n;i++)
        {
            
            left[i]=max(left[i-1],arr[i]);
        }
        right[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--)
        {
            right[i]=max(right[i+1],arr[i]);
        }
        for(int i=0;i<n;i++)
        {
            water+=(min(left[i],right[i]) - arr[i]);
        }
        return water;
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
        for(int i=0;i<n;i++) cin>>arr[i];
        Solution obj;
        cout<<obj.trappingWater(arr,n)<<endl;
    }
return 0;
}