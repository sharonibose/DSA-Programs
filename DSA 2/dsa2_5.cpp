//5)Write a C program to left rotate an array.
#include<iostream>
using namespace std;

int main()
{
    int i, n;
    cout<<"Enter the size of the array to be created: ";
    cin>>n;
    int array[n];

    for(i = 0; i < n; i++)
    {
        cout<<"Enter element number "<<i + 1<<": ";
        cin>>array[i];
    }

    //int temp[n];
    int temp = array[0];

   /* for(i = 0; i < n; i++)
    {
        temp[i]=array[i];
        array[i]=array[i+1];
        array[i+1]=temp[i];
    }
*/

for(i=0; i<n-1; i++)
{
    array[i]=array[i+1];
}

array[n-1]=temp;
    cout<<"New array: \n";

    for(i = 0; i < n; i++)
    {
        cout<<"Element number "<<i+1<<": "<<array[i]<<"\n";
    }

    return 0;
}