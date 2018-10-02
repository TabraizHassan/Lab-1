#include<iostream>
#include"useful_array.h"
using namespace std;

int main()
{
  int length,i,j,p,tempt;
  cout << "Enter size of array " << endl;
  cin>>length;
  int x[length];
  cout<<"Enter numbers of array"<<endl;
  for(i=0;i<=length-1;i++)
  {
      cin>>x[i];}

    int choice;
    char q='y';
    while(q=='y')
{
    cout<<endl<<"*******Enter what you want to do with array?********"<<endl;
    cout<< '\n';
    cout<<"Choice 1: Sort an array"<<endl;
    cout<<"Choice 2: Search for an integer in a sorted array"<<endl;
    cout<<"Choice 3: Searching for an integer in an unsorted array"<<endl;
    cout<<"Choice 4: Reversing an array"<<endl;
    cout<<"Choice 5: Rotate an array"<<endl;
    cout<< '\n';
    cin>>choice;

    if(choice==1)
    {

      cout <<endl<< "Array: " << '\n';
      for(i=0;i<=length-1;i++)
      {cout<<x[i]<<" ";}
        cout<<'\n';

      cout<< "Sorted array is: ";
      sort(x,length);
      for(i=0;i<length;i++)
    {
       cout<<x[i]<<"  ";
                          }
    cout<<endl;
      }



    else if(choice==2)
    {int key,index;

      cout <<endl<< "Array: " << '\n';
      for(i=0;i<=length-1;i++)
      {cout<<x[i]<<" ";}
        cout<<'\n';

    cout<<"Enter key"<<endl;
    cin>>key;
    cout<<endl;
    int first=0;
    int last=length-1;
    int result=checksort(x,length);
    if(result==0)
    {
        sort(x,length);
        for(i=0;i<length;i++)
        cout<<x[i]<<"  ";
        index=binarysearch(x,first,last,key);
    }
    else
    for(i=0;i<length;i++)
        cout<<x[i]<<"  ";
    index=binarysearch(x,first,last,key);
    if(index==-12)
    {
        cout<<endl<<"Key is not present in array"<<endl;
    }
    else
    {
                cout<<endl<<"Key is at index: ";
                cout<<index<<endl;
                                    }
        }



else if(choice==3)
{ int element;

  cout <<endl<< "Array: " << '\n';
  for(i=0;i<=length-1;i++)
  {  cout<<x[i]<<" ";}
  cout<<endl;


  cout<<"Enter your element: ";
  cin>>element;
  int k=location(x,length,element);
  if(k==0)
  {  cout<<"not found ";}
  else
  {cout<<"location of the element: "<<k<<endl;}
}




else if(choice==4)
{
  cout <<endl<< "Array: " << '\n';
  for(i=0;i<=length-1;i++)
  {  cout<<x[i]<<" ";}
    cout<<endl;


  reverse(x,length);
  cout << "Reversed array is: " << '\n';
  for (j=length-1;j>=0;j--)
  {
  cout<<x[j]<<" ";
  }

}


else if(choice==5)
{
  char choice_side;
  cout <<endl<< "Array: " << '\n';
  for(i=0;i<=length-1;i++)
  {
      cout<<x[i]<<" ";}

cout<<endl<<"Enter at which side you want to shift/rotate your array?Left or right?"<<'\n';
 cin>>choice_side;

 cout<< "Enter how much you want to shift/rotate your array?" << '\n';
 cin>>choice;


if(choice_side=='l')
{
rotate_left(x,choice,length);

 }

else if(choice_side=='r')
{
rotate_right(x,choice,length);

          }


cout<<"Rotated/Shifted array is: "<<endl;
            for(i=0;i<length;i++)
             {
                 cout<<x[i]<<" ";}

        }



cout<<endl<<"Do you want to continue? If yes press 'y' if no press 'n' or any other key"<<endl;
cin>>q;
cout<<endl;
}
}
