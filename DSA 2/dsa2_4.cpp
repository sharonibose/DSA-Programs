//4)Write a C program to merge two arrays into a third array.
#include<iostream>
using namespace std;

int main()
{
    int m;
    cout<<"Enter the size of array 1: ";
    cin>>m;
    int n;
    cout<<"Enter the size of array 2: ";
    cin>>n;

    int i, array1[m], array2[n];

    for(i=0;i<m;i++)
    {
        cout<<"Enter element number "<<i+1<<" of array 1: ";
        cin>>array1[i];
    }

    for(i=0;i<n;i++)
    {
        cout<<"Enter element number "<<i+1<<" of array 2: ";
        cin>>array2[i];
    }

    int o, c=0;
    o=m+n;

    int array3[o];

     for(i=0;i<o;i++)
     {
         array3[c++]=array1[i];
       //  array3[c++]=array2[o-i];
     }
     
     c=m;

      for(i=0;i<o;i++)
     {
         array3[c++]=array2[i];
     }

     for(i=0;i<o;i++)
     {
         cout<<"Element number "<<i+1<<": "<<array3[i];
         cout<<"\n";
     }

    return 0;
}