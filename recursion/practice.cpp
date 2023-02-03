#include<bits/stdc++.h>
using namespace std;

//print name n time using recursion
// void f(int i,int n)
// {
//     if(i>n)
//        return ;
    
//     cout<<"sk"<<endl;
//     f(i+1,n);
// }



//print linerly 1 to n

// void f(int i,int n)
// {
//     if(i>n)
//        return ;
    
//     cout<<i<<endl;
//     f(i+1,n);
// }


//Nto i
void f(int i,int n)
{
    if(i>n)
       return ;
    
    f(i+1,n);
    cout<<i<<endl;
}


int main()
{
    //1.
    int n;
    cin>>n;
    int i=1;
    f(i,n);
    
    return 0;
}