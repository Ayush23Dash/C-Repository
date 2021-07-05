#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;

class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
        vector<int>ans;
        int countNeg=0,countPos=0;
        //To check all positive or negative
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                return true;
                break;
            }
            if(arr[i]<0) countNeg++;
            if(arr[i]>0) countPos++;
        }
        
        if(countNeg==n || countPos==n) return false;
        
        
        // for(int i=0;i<n;i++)
        // {
        //     int sum =arr[i];
        //     for(int j=i+1;j<n;j++)
        //     {
        //         sum+=(arr[j]);
        //         ans.push_back(sum);
        //     }
        // }
        // for(int i=0;i<ans.size();i++)
        // {
        //     if(ans[i]==0)
        //     {
        //         return true;
        //         break;
        //     }
        // }
        // return false;
        
        set<int>cumSumArr;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            if(sum==0 || cumSumArr.find(sum)!=cumSumArr.end()) return true;
            cumSumArr.insert(sum);
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
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        Solution obj;
        if(obj.subArrayExists(arr,n))
        cout<<"Yes"<<"\n";
        else
            cout<<"No"<<"\n";
    }
    
return 0;
}