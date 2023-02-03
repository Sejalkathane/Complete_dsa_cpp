#include<bits/stdc++.h>
using namespace std;

// int f(int l,int r,int a[])
// {
//    if(l>=r) 
//       return 1;
//     swap(a[l],a[r]);
//     f(l+1,r-1,a);
// }

void f(int i,int arr[] ,int n)
{
    if(i>=n/2)   return ;
    swap(arr[i],arr[n-i-1]);
    f(i+1,arr,n);
}


int main()
{ 
   int n=4;

   int arr[n]={1,2,3,4};

   f(0,arr,n);
   for(int i=0;i<4;i++)
   {
    cout<<arr[i]<<endl;
   }
    return 0;
}