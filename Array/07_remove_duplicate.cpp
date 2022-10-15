// #include<iostream>
// using namespace std;

// // void dup(int arr[],int n)
// // {
// //     int res=1;
// //     for(int i=1;i<n;i++)
// //    {
// //     if(arr[i]!=arr[res-1])
// //     {
// //         arr[res]=arr[i];
// //         res++;
// //     }
// //   }
// //    cout<<res<<endl;
// //    for(int i=0;i<res;i++){
// //    cout<<arr[i]<<" ";
// //    }
// // }

// int main()
// {
//     int arr[]={10,20,20,30,30,30},n=6;
//     // dup(arr,n);

//     // int temp[n];
//     // temp[0]=arr[0];
//     // int res=1;

//     // for(int i=0;i<n;i++)
//     // {
//     //     if(temp[res-1]!=arr[0])
//     //        {
//     //            temp[res]=arr[i];
//     //            res++;
//     //        }
//     // }
//     // cout<<res<<endl;
//     //  for(int i=0;i<res;i++)
//     //    cout<<arr[i]<<" ";
//     return 0;
// }

//------------------------------------------------------------------------

#include <iostream>
using namespace std;

void dup(int arr[],int n){
    int res=1;

    for(int i=1;i<n;i++){
        if(arr[i]!=arr[res-1])
        {
            arr[res]=arr[i];
            res++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}

int main()
{
    int arr[]={1,1,2,2,2,2,3,4,4},n=9;
   
}