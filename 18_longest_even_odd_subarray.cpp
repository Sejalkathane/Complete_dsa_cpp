#include<iostream>
#include<cmath>
using namespace std;

// int maxevenodd(int arr[],int n)
// {
//     int res=1, curr=1;

//     for(int i=1;i<n;i++)
//     {
//         if((arr[i]%2==0 && arr[i-1]%2!=0) || (arr[i]%2!=0 && arr[i-1]==0))
//         {
//             curr++;
//             res=max(res,curr);
//         }
//         else 
//           curr=1;
//     }
//     return res;
// }


int maxevenodd(int arr[],int n){
   
   int res=1;
   int curr=1;

   for(int i=1;i<n;i++)
  {
    if((arr[i]%2==0 && arr[i-1]%2!=0)|| (arr[i]%2!=0 && arr[i-1]%2==0) )
    {
        curr++;
        res=max(res,curr);
    }
    else
     curr=1;
  }
  return res;

}

int main()
{
    // int arr[]={5,10,20,6,3,8},n=6;
    int arr[]={7,10,13,14},n=4;
    cout<<maxevenodd(arr,n);
    return 0;
}