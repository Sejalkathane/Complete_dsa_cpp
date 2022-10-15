#include <iostream>
using namespace std;

// Native Solution:
//  void leaders(int arr[],int n)
//  {

//     for(int i=0;i<n;i++)
//     {
//         bool flag=false;
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[i]<arr[j])
//             {
//                 flag=true;
//                 break;
//             }
//         }
//         if(flag==false)
//         {
//             cout<<arr[i]<<" ";
//         }
//     }
// }

// Efficent solution:
// void leader(int arr[],int n)
// {
//     int curr_ldr=arr[n-1];
//     cout<<curr_ldr<<" ";

//     for(int i=n-2;i>0;i--)
//     {
//         if(curr_ldr<arr[i])
//         {
//             curr_ldr=arr[i];
//             cout<<curr_ldr<<" ";
//         }
//     }
// }

// leader is those whose right side element is smaller then

void leader(int arr[], int n)
{
    int curr = arr[n - 1];
    cout << curr << " ";

    for (int i = n - 2; i > 0; i--)
    {
        if (curr < arr[i])
        {
            curr = arr[i];
            cout << curr << " ";
        }
    }
}

int main()
{
    int arr[] = {7, 10, 4, 10, 6, 3, 8, 2, 5, 2}, n = 10;
    leader(arr, n);
    return 0;
}