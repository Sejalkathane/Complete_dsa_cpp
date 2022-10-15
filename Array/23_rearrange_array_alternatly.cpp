#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5,6,7},n=7;
        int temp[]={n};
        int small=0,large=n-1;
        int flag=true;

    // Store result in temp[]
    for (int i = 0; i < n; i++) {
        if (flag)
            temp[i] = arr[large--];
        else
            temp[i] = arr[small++];
 
        flag = !flag;
    }
 
    // Copy temp[] to arr[]
    for (int i = 0; i < n; i++)
        arr[i] = temp[i];

    for(int i=0;i<n;i++)
    {
    cout<<arr[i];
  }

}