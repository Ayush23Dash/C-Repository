// Code for "https://practice.geeksforgeeks.org/problems/stock-buy-and-sell-1587115621/1#"
#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;

class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> A, int n){
        // code here
        vector<vector<int>> ans;
        int curPrice = A[0],buyInd = 0,sellInd,counter=1,y=0;
        
        //To check if array is in descending order, then return
        for(int i=1;i<n;i++)
        {
            if(A[i]<=A[i-1]) counter++;
        }
        if(counter==n || n==1 || n==0) return ans;
        
        for(int i=1;i<n;i++)
        {
            if(A[i]>=A[i-1]) {
                if(i==n-1 && buyInd<i)
                {
                    vector<int>temp;
                    sellInd=i;
                    temp={buyInd,sellInd};
                    ans.push_back(temp);
                }
                continue;
            }
            else if(A[i]<A[i-1])
            {
                curPrice = A[i];
                if((i-1)!=buyInd)
                {
                    sellInd = i-1;
                    // ans[y][0]=buyInd;
                    // ans[y][1]=sellInd;
                    vector<int>temp;
                    temp={buyInd,sellInd};
                    ans.push_back(temp);
                    // y++;
                }
                buyInd=i;
            }
        }
        // std::cout<<ans[1][1]<<endl;
        return ans;
        
    }
};

int check(vector<vector<int>> ans,vector<int>A,int p)
{
    int c=0;
    for(int i=0;i<ans.size();i++)
    {
        c+=A[ans[i][1]] - A[ans[i][0]];
    }
    return (c==p) ? 1:0;
}
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
        vector<int>A(n);
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        Solution ob;
        vector<vector<int>> ans = ob.stockBuySell(A,n);
        int p=0;
        for(int i=0;i<n-1;i++)
        {
            int x = A[i+1]-A[i];
            if(x>0)
            p+=x;
        }
        if(ans.size()==0)
        cout<<"No Profit";
        else{
            cout<<check(ans,A,p);
        }cout<<endl;
    }

return 0;
}