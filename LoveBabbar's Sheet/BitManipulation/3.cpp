#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;

class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        
        // Your logic here
        int xorred = a^b;
        int count=0;
        while(xorred)
        {
            if(xorred&1==1) count++;
            xorred=xorred>>1;
        }
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
        int a,b;
        cin>>a>>b;

        Solution ob;
        cout<<ob.countBitsFlip(a,b)<<endl;
        
    }
   
return 0;
}