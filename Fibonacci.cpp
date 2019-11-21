#include<iostream>
#include<conio.h>
using namespace std;
void fibonacci(int n)
{
	int i,arr[20];
	arr[0]=arr[1]=1;
	cout<<"\nThe Fibonacci Series upto "<<n<<" places is:\n";
	cout<<arr[0]<<" "<<arr[1]<<" ";
	for(i=2;i<n;i++)
	{
		arr[i]=arr[i-1]+arr[i-2];
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int n,ch;
	cout<<"Till how many numerical places do you want the Fibonacci Series?\n";
	cin>>n;
	fibonacci(n);
	  do{
		cout<<"\nDo you want to print more Fibonacci Series(1/0)?\n";
		cin>>ch;
		label:if(ch==1)
		{
			cout<<"\nTill how many numerical places do you want the Fibonacci Series?\n";
			cin>>n;
			fibonacci(n);
		}
		else if(ch==0)
		cout<<"Bye...";
		else
		{
			cout<<"\nEnter the corrrect choice(1/0)\n";
			cin>>ch;
			if(ch==1)
			goto label;
			else if(ch==0)
			cout<<"Bye...";
			else
			break;
		}
	}while(ch!=0);
	return 0;
}
