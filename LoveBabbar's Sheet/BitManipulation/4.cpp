#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;

class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    
    //Function to calculate perfect power of 2 before n
    int powerof2inrange(int n)
    {
        int x=0;
        while((1<<x)<=n)
        x++;
        return x-1;
    }
    int countSetBits(int n)
    {
        
        // for(int i=1;i<=n;i++)
        // {
        //     int temp=i;
        //     while(temp)
        //     {
        //         count++;
        //         temp=temp&(temp-1);
        //     }
        // }
        
        // Your logic here
        if(n==0) return 0;
        int count=0;
        
        int x = powerof2inrange(n);
        int setbitsbefore2raisetox = x*(1<<(x-1));
        int msbfrom2raisetoxtilln = n-(1<<x) +1;
        int rest = n - (1<<x);
        count = setbitsbefore2raisetox + msbfrom2raisetoxtilln + countSetBits(rest);
        return count;
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

        Solution ob;
        cout<<ob.countSetBits(n)<<endl;
        
    }
   
return 0;
}