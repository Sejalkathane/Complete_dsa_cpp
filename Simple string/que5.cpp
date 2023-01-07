// Write a C++ program to sort characters (numbers and punctuation symbols are not included) in a string. Go to the editor
// Example:
// Sample Input: python
// Sample Output: hnopty
// Click me to see the sample solution

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str="python";
    sort(str.begin(),str.end());
    cout<<str;
    return 0;
}