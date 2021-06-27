#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> res;
        int n = prices.size(),minimum=INT_MAX,counter=0;
        if(n==1)
        {
            return 0;
        }
        else
    {
        for(int i=0;i<n;i++)
        {
            minimum=min(minimum,prices.at(i));
            if(prices.at(i)>minimum)
            {
                res.push_back(prices.at(i)-minimum);
            }else{
                counter++;
            }
        }
            sort(res.begin(),res.end());
            int a = res.size();
            if(counter==prices.size()) return 0;
            else
            return res.at(a-1);
    }
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
        int n,temp;
        cin>>n;
        vector<int>arr;
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            arr.push_back(temp);
        }
        Solution obj;
        cout<<obj.maxProfit(arr)<<endl;
    }
return 0;
}