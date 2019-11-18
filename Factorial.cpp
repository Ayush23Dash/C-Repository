#include<iostream>
#include<conio.h>
using namespace std;
void factorial(long num)
{
	long fact = 1;
	for(int i=1;i<=num;i++)
	{
		fact*=i;
	}
	cout<<"The factorial of the number is "<<fact;
}

int main()
{
	long num,ch;
	cout<<"Enter the number you want factorial of\n";
	cin>>num;
	factorial(num);
	do{
		cout<<"Want to have factorial of more numbers(1/0)";
		cin>>ch;
		if(ch==1)
		{
			cout<<"Enter the number";
			cin>>num;
			factorial(num);
		}
		else if(ch==0)
		{
			cout<<"Bye...";
		}
		else
		cout<<"Enter valid choice(1/0)";
	}while(ch!=0);
}
getch();
return 0;
}
