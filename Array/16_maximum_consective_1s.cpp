#include <iostream>
using namespace std;

// this we solve using binary number :: in 0 and 1 from

// void printGroups(int arr[],int n)
// {
//     for(int i=1;i<n;i++)
//     {
//         if(arr[i] != arr[i-1])
//         {
//           if(arr[i]!=arr[0])
//              cout<<"from "<<i<<" to ";
//          else
//           cout<<(i-1)<<endl;
//     }}
// }

int printGroups(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            if (arr[i] != arr[0])
                cout << "from " << i << " to ";
            else
                cout << (i - 1) << endl;
        }   
    }
}

int main()
{
    int arr[] = {0, 0, 1, 1, 0, 0, 1, 1, 0}, n = 9;
    printGroups(arr, n);
    return 0;
}