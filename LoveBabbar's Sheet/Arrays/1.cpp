#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n,temp;
	vector<int>arr;
	vector<int>res;
	cout<<"Enter size of array";
	cin>>n;
	for(int i{0};i<n;i++)
	{
		cin>>temp;
		arr.push_back(temp);
	}
	for(int j{n-1};j>=0;j--)
	{
		res.push_back(arr.at(j));
	}
	cout<<"Reversed Array : \n";
	for(int i{0};i<n;i++)
	{
		cout<<res.at(i)<<"\n";
	}
	
	return 0;
}
