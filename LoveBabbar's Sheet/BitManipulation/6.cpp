#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;

class Solution {
  public:
    int findPosition(int n) {
        // code here
        int count=0,pos=0,flag=0;
        while(n)
        {
            if(n&1==1)
            {
                count++;
            }
            n=n>>1;
            if(count>1) {
                flag=1;
                break;
            }
            pos++;
            
        }
        if(count==0) return -1;
        if(flag) return -1;
        return pos;
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
        cout<<ob.findPosition(n)<<endl;
        
    }
   
return 0;
}