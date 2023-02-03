#include <iostream>
#include <vector>
using namespace std;

//a be the array of clour , c be possible color
int findMinSubarray(vector<int>& a, int c) {
    // creates a vector v of size c+1 and initializes all elements to 0
    vector<int> v(c + 1, 0);

    //size of array
    int n=a.size();

// count that will be used to keep track of the number of unique colors seen in the current window
    int i = 0, j = 0, count = 0;

    int minLen = INT_MAX;


    while (j < n) 
    {
        if (v[a[j]] == 0) 
        {
            count++;
        }
        v[a[j]]++;

        //till we have count same as c
        while (count == c) {
            //if length of the current window (j - i + 1) is less than minLen, it updates the minLen
            if (j - i + 1 < minLen) {
                minLen = j - i + 1;
            }
            // decrement the count of color at index i in the vector v.
            v[a[i]]--;

            //if the count of color at index i in the vector v is equal to 0, it decrements the count variable by 1
            if (v[a[i]] == 0) {
                count--;
            }
            i++;
        }
        j++;
    }
    if (minLen == INT_MAX) {
        return -1;
    }
    return minLen;
}

int main() {
    vector<int> a = {1, 2, 1, 3, 2, 3, 3, 1, 2, 3};
    int c = 3;
    int minLen = findMinSubarray(a, c);
    cout << "Minimum length of subarray: " << minLen << endl;
    return 0;
}
