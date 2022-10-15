#include <iostream>
using namespace std;

//easy to under stand🤪✌👍
int main()
{
    int arr[20], n, i, num, loc;

    cout << "Enter size of array : " << endl;
    cin >> n;

    cout << "Enter array element: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // cout << "Hear is your array : " << endl;
    // for (i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    cout << "\nEnter element for insert : ";
    cin >> num;
    cout << "Enter location : ";
    cin >> loc;

    if (loc <= n)
    {
        for (i = n; i >= loc; i--)     
        {
            arr[i] = arr[i-1];         
        }

        n++;
        arr[loc - 1] = num;

        cout << "Array list after insertion : ";
        for (i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
    else
    {
        cout << "Please enter valid location..... \nRemember that location is less than or equal to " << n;
    }
    
}