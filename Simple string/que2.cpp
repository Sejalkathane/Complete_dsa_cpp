//  Write a C++ program to change every letter in a given string with the letter following it in the alphabet (ie. a becomes b, p becomes q, z becomes a)


#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str="w3resources";

    for(int i=0;i<str.length();i++)
    {
        int s=int(str[i]);

        if(s==122)
        {
            str[i]=char(97);
        }

        else if (s == 90)
		{
			str[i] = char(65);
		}

        else if(s >= 65 && s <= 90 || s >= 97 && s <= 122)
        {
            str[i]=char(s+1);
        }
    }
    cout<<str<<endl;
}






