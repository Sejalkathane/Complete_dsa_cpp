#include<bits/stdc++.h>
using namespace std;

int main()
{
    //write a program to reverse string

    string str="Sejal";
     string rev="";
 
     for(int i=str.length()-1;i>=0;i--)
     {
            rev=rev+str[i];
     }

     cout<<rev;
    return 0;
}