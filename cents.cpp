#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{

int dollars{}, cents{},quarters{},dimes{},nickels{},pennies{},dollarCentLeft{},quarterCentLeft{},dimeCentLeft{},nickelCentLeft{};

cout<<"Enter your amount in cents"<<endl;
cin>>cents;

dollars = cents/100;
dollarCentLeft = cents%100;

quarters = dollarCentLeft/25;
quarterCentLeft = dollarCentLeft%25;

dimes = quarterCentLeft/10;
dimeCentLeft = quarterCentLeft%10;

nickels=dimeCentLeft/5;
pennies = dimeCentLeft%5;

cout<<"You can provide this change as follows : "<<endl;
cout<<"dollars : "<<dollars<<endl;
cout<<"quarters : "<<quarters<<endl;
cout<<"dimes : "<<dimes<<endl;
cout<<"nickels : "<<nickels<<endl;
cout<<"pennies : "<<pennies<<endl;

  cout<<endl;
  return 0;
}
