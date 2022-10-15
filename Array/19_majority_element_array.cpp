#include<iostream>
using namespace std;

//Native solution : 

// int findMajoriy(int arr[],int n)
// {
//     int count=1,i;
// for(i=0;i<n;i++)
// {
//      for(int j=i+1;j<n;j++)
//         {
//         if(arr[i]==arr[j])
//         count++;
//         }
//      if(count>n/2)
//        return i;
//      }
//    return i;
// }


//Efficent solution : we use" MORES-VOTE ALGORITHM "
// 




int findMajoriy(int arr[],int n){

    int res=0,count=1;
                          
    for(int i=1;i<n;i++){
        if(arr[res]==arr[i])
          count++;

        else 
          count--;

        if(count==0)
          res=i;
          count=1;
    }

    count=0;

    for(int i=0;i<n;i++){
        if(arr[res]==arr[i])
           count++;
    }
    if(count<=n/2)
      return -1;
    
  return res;
}




int main()
{
    int arr[]={1,3,2,1,1,1},n=6;
   cout<<findMajoriy(arr,n);
    return 0;
}


