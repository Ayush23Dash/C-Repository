#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;

class Solution{
public:	
	
	
	int isPlaindrome(string S)
	{
	    // Your code goes here
	    int n = S.size();
	    int low=0,high=n-1;
	    while(low<high)
	    {
	        if(S[low]==S[high])
	        {
	            low++;
	            high--;
	        }
	        else {
	            return 0;
	            break;
	        }
	    }
	    return 1;
	}

};
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.isPlaindrome(s)<<"\n";
    }

return 0;
}