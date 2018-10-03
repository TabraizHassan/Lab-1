#include<iostream>
using namespace std;
float calculated_savings(float interest_rate,float deposit_money);
int main()
{
  int years;
  float deposit_money,interest_rate,savings=0;

cout<<"Enter number of years"<<endl;
cin>>years;

cout<<"Enter your interest rate"<<endl;
cin>>interest_rate;

for(int i=1;i<=years;i++)
{
  cout<<"Enter your deposit amount"<<endl;
  cin>>deposit_money;
   savings=savings+calculated_savings(interest_rate,deposit_money);
}
cout<<"Savings: "<<savings<<endl;

}
float calculated_savings(float interest_rate,float deposit_money)
{
float profit= deposit_money*(interest_rate/100);
return profit;
}
