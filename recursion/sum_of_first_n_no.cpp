#include<bits/stdc++.h>
using namespace std;

int sum(int n)
{
    if(n==0)  
      return 0;
    return n+sum(n-1);
}
int main()
{ 
     int n=3;
     cout<<sum(n);
    
    return 0;
}