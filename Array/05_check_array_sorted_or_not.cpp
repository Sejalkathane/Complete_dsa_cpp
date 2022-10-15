#include <iostream>
using namespace std;

// void issorted(int arr[],int n)
// {
//     for(int i=1;i<n;i++)
//        if(arr[i]<arr[i-1])
//             cout<<"false"<<endl;

//     cout<<"true"<<endl;
// }

bool issorted(int arr[], int n)
{
  for (int i = 1; i < n; i++)
  {
    if (arr[i] < arr[i - 1])
    {
      return false;
    }
  }
  return true;
}

int main()
{
  int arr[] = {1, 2, 10, 40}, n = 4;
  cout<<issorted(arr,n);

  //    for(int i=1;i<n;i++)
  //        if(arr[i]<arr[i-1]){
  //            cout<<"false"<<endl;
  //            }

  //    cout<<"true"<<endl;
}