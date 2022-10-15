#include <iostream>
using namespace std;

int main()
{

   int arr[20], n, i, num, j, pos = 0;

    cout << "Please enter size of array : ";
    cin>>n;

    cout << "\nEnter " << n << " array Elements : ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "\nEnter Element to delete: ";
    cin >> num;
    
    for (i = 0; i < n; i++)
    {
        if (arr[i== num])
        {
            for (j = i; j < (n - 1); j++)
            {
               arr[j] = arr[j + 1];
               pos++;
                i--;
                n--;
            }
        }
    }
    if (pos = 0) 
    {
        cout << "\nElement doesnt found in the array";
    }
    else
    {
        cout << "\nElement Deleted Sucessfully";

        for(i=0;i<n;i++){
        cout<<"\nNow your array are : "<<arr[j];
        }
    }
    cout << endl;

    return 0;

}
    



//     int arr[]={11,13,5,7,6,9};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int x=6;

//     //Delete x from arr[]

//     int i;
//     for (i=0;i<n;i++)
//         if(arr[i]==x)
//         break;

//     //if x found in array
//     if(i<n)
//     {
//       //reduce size of array and move all
//       //element on space ahead

//       n=n-1;
//       for (int j=i;j<n;j++)
//         arr[j]=arr[j+1];

//       return n;
//     }
   
//    //modified array

//    cout<< " Modified array is \n";
//    for (int i=0;i<n;i++)
//     cout<<arr[i]<<" ";

//     return 0;
// }






// #include <bits/stdc++.h>
// using namespace std;

// int deleteElementsInRange(int arr[], int n, int l, int r) {
//    int i,newIndex = 0;
//    for (i = 0; i < n; i++) 
//    {
//       // adding updating element if it is not in the given range
//       if (i <= l || i >= r) 
//       {
//          arr[newIndex] = arr[i];
//          newIndex++;
//       }
//    }
//    // returing the updated index
//    return newIndex;
// }

// int main() 
// {
//    int n = 9, l = 1, r = 6;
//    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//    int updatedArrayLength = deleteElementsInRange(arr, n, l, r);
//    for (int i = 0; i < updatedArrayLength; i++) 
//    {
//       cout << arr[i] << " ";
//    }
//    cout << endl;
//    return 0;
// }