#include <iostream>
using namespace std;

//  int Secondlargest(int arr[],int n)
//  {
//     int res=-1,largest=0;

//     for(int i=1;i<n;i++)
//     {
//         if(arr[i]>arr[largest])
//         {
//             res=largest;
//             largest=i;
//         }
//         else
//           if(arr[i]!=arr[largest])
//           {
//               if(res==-1 || arr[i] > arr[res])
//                 res=i;
//           }
//     }return res;
//  }

int Secondlargest(int arr[], int n)
{

    int res = -1, largest = 0;
    int i;
    for (i = 1; i < n; i++)
    {
        if (arr[i] > arr[largest])
        {
            res = largest;
            largest = i;
        }
        else if (arr[i] != arr[largest])
        {
            if (res == -1 || arr[i] > arr[res])
                res = i;
        }
    }
    return res;
}

int main()
{
    int arr[] = {12, 8, 7, 12};
    int n = 4;

    cout << Secondlargest(arr, n); // ans is two because 0

    return 0;
}
