#include<iostream>
using namespace std;

// int largest(int arr[],int n)
// {
//     int res=0;
//     for(int i=1;i<n;i++)
//     {
//         if(arr[i]>arr[res])
//             res=i;
//     }
//     return res;        //this give position of array we need element
// }


//native solution:
// int getlargest(int arr[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         bool flag=true;

//         for(int j=0;j<n;j++)
//           if(arr[j]>arr[i]){
//               flag=false;
//               break;
//           }
//            if(flag ==true)
//                return i;
//     }
//     return -1;
// }



int getlargest(int arr[],int n){

    int res=0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[res])
           res=i;
    }
    return res;
}




int main()
{
    int arr[]={21,39,23,34};
    int n=4; 

    //give us the position of array element which is largest
    cout<<getlargest(arr,n);
   
    // ***practice***
    // int result=0;
    // for(int i=1;i<n;i++)
    // {
    //     if(arr[i]>arr[result])
    //        result=i;
    // }
    // cout<<arr[result];

    return 0;             
}