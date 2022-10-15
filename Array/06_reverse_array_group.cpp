#include<iostream>
using namespace std;

// void reverse(int arr[],int n)
// {
//     int low=0,high=n-1;
//     while(low<high)
//     {
//         int temp=arr[low];
//         arr[low]=arr[high];
//         arr[high]=temp;
//         low++;
//         high--;
//      }
//      for(int i=0;i<n;i++)
//      {
//          cout<<arr[i]<<" ";
//      }
// }





// void reverse(int arr[],int n){
       
//        int low =0,high=n-1;
//        while(low<high){
//           int temp=arr[low];
//           arr[low]=arr[high];
//           arr[high]=temp;
//           low++;
//           high--;

//        }
//        for(int i=0;i<n;i++)
//        {
//         cout<<arr[i]<<" ";
//        }

// }


// int main()
// {
//     int arr[]={12,24,652,22},n=4;
//     reverse(arr,n);
//     return 0;
// }

//---------------------------------------------------------------------------------


// reverse array in group:

void reversegroup(int arr[],int n, int k){
  
  for(int i=0;i<n;i+=k)
  {
    int left=i;
    int right=min(i+k-1,n-1);

    while(left<right)
    {
        swap(arr[left++],arr[right--]);
    }
  }

  

}


int main(){
    int arr[]={1,2,3,4,5,6},n=6,k=3;

reversegroup(arr,n,k);
}

