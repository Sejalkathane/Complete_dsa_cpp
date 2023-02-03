#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="armaze";
    string p="amazon";
    string ans="";

    int i=0;

  for(int i=0;i<=s.length();i++)
    {
        if(s[i]==p[i])
            {
                ans=ans+p[i];
                 s[i]++;
                 p[i]++;
            }
        else{
        s[i]++;

        }
    } 
   cout<<ans;
}

