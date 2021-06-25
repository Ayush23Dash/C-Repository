#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;

class Solution
{
	public:
		int find_median(vector<int> v)
		{
		    // Code here.
		    sort(v.begin(),v.end());
		    int n = v.size();
		    if(n%2!=0)
		    {
		        int index = (n/2);
		        return v.at(index);
		    }else{
		        int fI = n/2 - 1;
		        int lI = n/2;
		        int median = (v.at(fI) + v.at(lI))/2;
		        return median;
		    }
		}
  };
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int T;
    cin>>T;
    while(T--)
    {
      int n;
      cin>>n;
      vector<int> v(n);
      for(int i=0;i<n;i++)
      {
        cin>>v[i];
      }
      Solution ob;
      int ans = ob.find_median(v);
      cout<<ans<<"\n";
    }
return 0;
}
