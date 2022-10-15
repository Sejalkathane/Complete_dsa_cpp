#include<iostream>
using namespace std;

int maxdiff(int arr[],int n)
{
    int res=arr[1]=arr[0],minval=arr[0];
    for(int j=1;j<n;j++)
    {
    res=max(res,arr[j]-minval);
    minval=min(minval,arr[j]);
    }
    return res;
}
int main()
{
    // int arr[]={2,3,10,6,4,8,1},n=7;
    int arr[]={10,20,30},n=3;
    cout<<maxdiff(arr,n);
    return 0;
}