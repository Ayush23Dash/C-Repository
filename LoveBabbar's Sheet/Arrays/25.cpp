#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int>m;
        vector<int>ans;
        int count = 0;
        for(int i=0;i<nums.size();i++)
            m[nums.at(i)]++;
        for(auto it:m)
        {
            if(it.second > (nums.size())/3)
                ans.push_back(it.first);
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
Solution ob;
int n;
cin>>n;
vi a;
for(int i=0;i<n;i++)
{
    int temp;
    cin>>temp;
    a.push_back(temp);
}
vi ans = ob.majorityElement(a);
for(int i=0;i<ans.size();i++)
{
    cout<<ans[i]<<" ";
}
return 0;
}
