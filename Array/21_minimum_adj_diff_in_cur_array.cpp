#include<iostream>
using namespace std;

int main()
{
    int arr[]={10,12,13,15,10},n=5;

    // int res=arr[1]-arr[0];
    // for(int i=2;i<n;i++)
    // {
    //     res=min(res,abs(arr[i]-arr[i-1]));
    // }
    // res=min(res,abs(arr[n-1]-arr[0]));


    int res=arr[1]-arr[0];

    for(int i=2;i<n;i++)
    {
        res=min(res,abs(arr[i]-arr[i-1]));
    }
    res=min(res,abs(arr[n-1]-arr[0]));

    cout<<res;
    
    return 0;
}