#include <iostream>
using namespace std;

// void movezero(int arr[],int n)
// {
//     int count=0;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]!=0)
//         {
//             swap(arr[i],arr[count]);
//             count++;
//         }
//     }
//     cout<<count<<endl;
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }

void movezero(int arr[], int n)
{
    int count=0;
    for (int i = 0; i < n; i++)
    {
      if(arr[i]!=0){
        swap(arr[i],arr[count]);
        count++;
      }
    }
cout<<count<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}

int main()
{
    int arr[] = {1, 0, 2, 0, 0, 3,0,4,0,0,0, 4}, n = 12;
    movezero(arr, n);
    return 0;
}