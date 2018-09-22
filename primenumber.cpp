#include<iostream>
using namespace std;
int main()
{int number,divisor,factor=0;
cout<<"Enter your number"<<endl;
cin>>number;
for(divisor=1;divisor<=number;divisor++)
{
  if(number%divisor==0)
  factor++;
}
if(factor==2)
{
  cout<<"Prime number"<<endl;
}
else
{
  cout<<"Not prime"<<endl;
}
return 0;
}
