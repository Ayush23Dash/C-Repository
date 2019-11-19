#include<iostream>
#include<conio.h>
using namespace std;
void floyd(int n)
{
	int num=1,arr[10][10],i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			arr[i][j] = num;
			num++;
		}
	}
	cout<<"The floyd triangle is:\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
}

int main()
{
	int n,ch;
	cout<<"Enter the number of rows upto which you want the floyd triangle\n";
	cin>>n;
	floyd(n);
	do{
		cout<<"Do you want to print more floyd triangles(1/0)\n";
		cin>>ch;
		if(ch==1)
		{
			cout<<"Enter the number of rows upto which you want the floyd triangle\n";
			cin>>n;
			floyd(n);
		}
		else if(ch==0)
		cout<<"Bye...";
		else
		{
			cout<<"Enter correct choice(1/0)\n";
		}
	}while(ch!=0);
	return 0;
}
