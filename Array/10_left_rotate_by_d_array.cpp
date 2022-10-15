#include <iostream>
using namespace std;

// void lrotateone(int arr[], int n)
// {

//     int temp = arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         arr[i - 1] = arr[i];
//     }
//     arr[n - 1] = temp;

//     //   for(int i=0;i<n;i++){
//     //       cout<<arr[i]<<" ";
//     //   }
// }

// void drotate(int arr[], int n, int d)
// {
//     for (int i = 0; i < d; i++)
//     {
//         lrotateone(arr, n);
//     }

//          for(int i=0;i<n;i++){
//           cout<<arr[i]<<" ";
//       }
// }



//--------------------

void reverse(int arr[],int low,int high){
    while(low<high)
    {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}


void leftrotate(int arr[],int n,int d){  

     reverse(arr,0,d-1);
     reverse(arr,d,n-1);
     reverse(arr,0,n-1);
  
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
}



int main()
{

    int arr[] = {1, 2, 3, 4, 5}, n = 5, d = 3;
    // drotate(arr, n, d);

     leftrotate(arr,n,d);
    return 0;

    return 0;
}
