#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        if(n==1)
            return;
        
        int peakIndex=-1;
        for(int i=1;i<n;i++ )  //Find PeakIndex
        {
            if(nums[i]>nums[i-1])
                peakIndex=i;
        }
        if(peakIndex==-1)    //If Array is sorted in descending order,return ascending array
        {
            for(int i=0;i<n/2;i++)
            {
                swap(nums[i],nums[n-1-i]);
            }
            return;
        }
        
        int index = peakIndex;
        for(int i=peakIndex+1;i<n;i++)
        {
            if(nums[i]>nums[peakIndex-1] && nums[i]<nums[peakIndex])
                index=i;
        }
        swap(nums[index],nums[peakIndex-1]);
        sort(nums.begin()+peakIndex,nums.end());
        
    }
};
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

int n,temp;
cin>>n;
vector<int>nums;
for(int i=0;i<n;i++) 
{
    cin>>temp;
    nums.push_back(temp);
}
Solution ob;
ob.nextPermutation(nums);
for(int i=0;i<n;i++) cout<<nums[i]<<" ";

return 0;
}