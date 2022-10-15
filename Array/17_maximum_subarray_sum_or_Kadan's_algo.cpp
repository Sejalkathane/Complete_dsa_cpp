#include<iostream>
#include<cmath>
using namespace std;


//Hear we use popular algorithm that is ::=>  KADAN'S ALGORITHM


// int maxsum(int arr[],int n)
// {
//     int res=arr[0];
//     int maxEnding=arr[0];

//     for(int i=1;i<n;i++)
//     {
//         maxEnding=max(maxEnding+arr[i],arr[i]);
//         res=max(maxEnding,res);
//     }
//     return res;
// }


int maxsum(int arr[],int n)
{
    int res=arr[0];
    int maxend=arr[0];

    for(int i=1;i<n;i++){
        maxend=max(maxend+arr[i],arr[i]);
        res=max(res,maxend);
    } 
  return res;

}

int main()
{
    int arr[]={-3,8,-2,4,-5,6},n=6;
   cout<<maxsum(arr,n);
    return 0;
}