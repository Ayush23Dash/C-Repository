#include <iostream>
#include<climits>
#include<vector>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int>arr;
	for(int i=0;i<n;i++)
	{
	    int temp;
	    cin>>temp;
	    arr.push_back(temp);
	}
	int min=INT_MAX;
	int max = INT_MIN;
	for(int i=1;i<n;i++)
	{
	    if(arr[i]<min)
	    min = arr[i];
	    if(arr[i]>max)
	    max=arr[i];
	}
	cout<<"Min ele is "<<min<<endl<<"Max ele is "<<max;
	return 0;
}