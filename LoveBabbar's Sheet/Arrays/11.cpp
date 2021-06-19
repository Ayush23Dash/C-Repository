#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans = 0;
        int low=0, high=nums.size()-1;
        while(low<high)
        {
            if(nums.at(low)==nums.at(low+1))
            {
                ans=nums.at(low);
                break;
            }
            else if(nums.at(high)==nums.at(high-1))
            {
                ans = nums.at(high);
                break;
            }
            else{
                low++;
                high--;
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
vector<int>a;
int n,temp;
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>temp;
    a.push_back(temp);
}
Solution ob;
int ab = ob.findDuplicate(a);
cout<<ab;
return 0;
}