#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;

class Solution {
  public:
    int setBits(int N) {
        // Write Your Code here
        int count=0;
        while(N)
        {
            if(N&1==1) count++;
            N=N>>1;
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
        int N;
        cin>>N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout<<cnt<<endl;
    }
   
return 0;
}