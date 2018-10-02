#include<iostream>
#include"useful_array.h"
using namespace std;
bool checksort(int x[],int length)
{
    int m=0;
    for(int i=0;i+1<=length-1;i++)
     {

        if(x[i]>x[i+1])
        {
            m=1;
                }
     }
     if(m==0)
     {
         return true;
     }
     else
     {
         return false;
     }
}


void sort(int x[],int length)
{
    int p,tempt;
for (int j=0;j<length;j++)
{
    for(p=j+1;p<length;p++)
    {
      if(x[j]>=x[p])
    {
      tempt=x[j];
      x[j]=x[p];
      x[p]=tempt;
                  }
                    }
  }
}

int binarysearch(int x[],int first,int last,int key)
{
    int mid=(first+last)/2;
    if(first<=last)
    {
        if(key==x[mid])
        {
            return mid;

        }
        else if(key>x[mid])
        {
            return (binarysearch(x,mid+1,last,key));
            }
        else if(key<x[mid])
        {
            return (binarysearch(x,first,mid-1,key));
        }
                    }
        return -12;
}

int location(int x[],int length,int element)
{ int j;
  for (j=0;j<length;j++)
  {
    if (element==x[j])
    {
        return j;
    }

}
return 0;
}

void reverse(int x[],int length)
{
 int y[length];
 int i,j,p;
 for (j=length-1;j>=0;j--)
 {
     for(p=0;p<length;p++)
     {
       y[p]=x[j];
     }
 }
}

void rotate_left(int x[],int choice,int length)
{
int i,j,t;
  for(i=0;i<choice;i++)
  {
      t=x[0];
      for(j=0;j<length-1;j++)
      {
          x[j]=x[j+1];

      }
      x[j]=t;

}
}

void rotate_right(int x[],int choice,int length)
{
  int i,j,t;
  for(i=0;i<choice;i++)
  {
      t=x[length-1];
      for(j=length-1;j>=0;j--)
      {
          x[j]=x[j-1];

      }
      x[0]=t;

}
}
