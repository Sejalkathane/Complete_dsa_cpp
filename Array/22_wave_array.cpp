#include<iostream>
#include<algorithm>
using namespace std;

// void swap(int *x,int *y)
// {
//     int temp=*x;
//     *x=*y;
//     *y=temp;
// }

void sortinwave(int arr[],int n)
{
    sort(arr,arr+n);

    for(int i=0;i<n-1;i+=2)
    //    swap(&arr[i],&arr[i+1]);
     swap(arr[i],arr[i+1]);
}


int main ()
{
    int arr[]={1,2,3,4,5},n=5;
    sortinwave(arr,n);

    for(int i=0;i<n;i++)
    {
      cout<<arr[i];
    }
}