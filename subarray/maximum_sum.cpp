#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=5;
    int arr[n] = {1, 2, -3, 4, -5};
    int k=2;
    int mx=INT_MIN;
    int sum=0;
    int j=0,i=0;
    while(j<n)
    {
        //calculation:
        sum=sum+arr[j];
        
        if(j-i+1 < k)
         { 
             j++;
          }
         
        else if(j-i+1==k)
        { 
           
           mx=max(mx,sum);
           sum=sum-arr[i];

           //slide window
           i++;
           j++;
        }
   
    }
         cout<<mx;

    return 0;
}