#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;

class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        
        // Your code here    
        // int x=0;
        // while((1<<x)<=n) x++;
        
        // int power=x-1;
        // if(1<<power == n) return true;
        // else return false;
        return((n!=0)&&(n&(n-1))==0);
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
        long long n;
        cin>>n;

        Solution ob;
        if(ob.isPowerofTwo(n)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
   
return 0;
}