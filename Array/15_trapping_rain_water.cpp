#include <iostream>
#include <cmath>
using namespace std;

// int getwater(int arr[],int n)
// {
//     int res=0;
//     for(int i=1;i<n-1;i++)
//     {
//         int lmax=arr[i];
//         for(int j=0;j<i;j++)
//           lmax=max(lmax,arr[j]);

//         int rmax=arr[i];
//         for(int j=i+1;j<n;j++)
//           rmax=max(rmax,arr[j]);

//         res=res+min(lmax,rmax)-arr[i];
//     }
//     return res;
// }

// Efficent soution

int getwater(int arr[], int n)
{
  int res = 0;

  for (int i = 1; i < n - 1; i++)
  {
    int lMax[n], rMax[n];
    int res = 0;

    lMax[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
      lMax[i] = max(arr[i], lMax[i - 1]);
    }

    rMax[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
      rMax[i] = max(arr[i], rMax[i + 1]);
    }

    for (int i = 1; i < n - 1; i++)
    {
      res = res + (min(lMax[i], rMax[i]) - arr[i]);
    }

    return res;
  }
  return res;
}
int main()
{
  // int arr[]={3,0,1,2,5},n=5;
  int arr[] = {3, 0, 0, 0, 5}, n = 5;

  cout << getwater(arr, n);
  return 0;
}