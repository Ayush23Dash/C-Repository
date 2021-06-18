#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
	int n;
	cin>>n;
	vector<int>arr;
	for(int i=0;i<n;i++)
	{
	    int temp;
	    cin>>temp;
	    arr.push_back(temp);
	}
	int flag = -1;
	for(int i=0;i<n;i++)
	{
	    if(arr[i]<0)
	    {
	        int temp;
	        flag++;
	        temp = arr[i];
	        arr[i]=arr[flag];
	        arr[flag]=temp;
	    }
	}
	for(int i=0;i<n;i++)
	{
	    cout<<arr.at(i)<<" ";
	}
	
	return 0;
}