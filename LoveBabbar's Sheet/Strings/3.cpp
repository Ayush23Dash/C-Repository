#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;

class Solution{
public:	
	
	
	void duplicateCount(string S)
	{
	    // Your code goes here
        int n = S.size();
	    map<char,int>m;
        for(int i=0;i<n;i++)
        {
            m[S[i]]++;
        }
        for(auto it:m)
        {
            if(it.second > 1)
            {
                cout<<"count['"<<it.first<<"'] = "<<it.second<<endl;
            }
        }
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
        cout<<"Test Case "<<t+1<<endl;
        ob.duplicateCount(s);
        cout<<endl;
        
    }

return 0;
}