// 1. Write a C++ program to reverse a given string. Go to the editor
// Example:
// Sample Input: w3resource
// Sample Output: ecruoser3w
// Click me to see the sample solution

// 2. Write a C++ program to change every letter in a given string with the letter following it in the alphabet (ie. a becomes b, p becomes q, z becomes a). Go to the editor
// Example:
// Sample Input: w3resource      
// Sample Output: x3sftpvsdf
// Click me to see the sample solution

// 3. Write a C++ program to capitalize the first letter of each word of a given string. Words must be separated by only one space. Go to the editor
// Example:
// Sample Input: cpp string exercises
// Sample Output: Cpp String Exercises
// Click me to see the sample solution

// 4. ❌ Write a C++ program to find the largest word in a given string. Go to the editor
// Example:
// Sample Input: C++ is a general-purpose programming language.
// Sample Output: programming
// Click me to see the sample solution

// 5. Write a C++ program to sort characters (numbers and punctuation symbols are not included) in a string. Go to the editor
// Example:
// Sample Input: python
// Sample Output: hnopty
// Click me to see the sample solution

// 6. Write a C++ program to check whether the characters e and g are separated by exactly 2 places anywhere in a given string at least once. Go to the editor
// + Example:
// Sample Input: eagerer
// Sample Output: eagerer -> 1
// Click me to see the sample solution

// 7. Write a C++ program to count all the vowels in a given string. Go to the editor
// Example:
// Sample Input: eagerer
// Sample output: number of vowels -> 4
// Click me to see the sample solution
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string str="eagerer";
//     int count=0;
//     for(int i=0;i<str.length();i++)
//     {
//         if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' ||str[i]=='u')
//         {
//           count++;
//         }
//     }
//     cout<<count;
//     return 0;
// }





// 8. Write a C++ program to count all the words in a given string. Go to the editor
// Example:
// Sample Input: Python
// Sample Output: number of words -> 1
// Click me to see the sample solution

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string str="python strign sfkldn mnvm,dv vkn";
//     int count=1;
//     for(int i=0;i<str.length();i++)
//     {
//         if(str[i]==' ')
//         {
//             count++;
//         }
//     }
//     cout<< count;
//     return 0;
// }




// 9. Write a C++ program to check whether two characters present equally in a given string. Go to the editor
// Example:
// Sample Input: aabcdeef
// Sample Output: True
// Click me to see the sample solution


// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string str="aabcdeef";
//     map<int,int>mp;
//     for(int i=0;i<str.length();i++)
//     {
//        mp[str[i]]++;
//     }

//     bool ans=false;
//     for(auto x:mp)
//     {
//         if(x.second==2)
//         {
//             ans=true;
//             cout<<"true";
//             break;
//         }
//     }
//     if(ans!=true)
//     {
//         cout<<"false";
//     }
//     return 0;
// }





// 10. Write a C++ program to check if a given string is a Palindrome or not. Go to the editor
// A palindrome is a word, number, phrase, or other sequence of characters which reads the same backward as forward, such as madam, racecar.
// Example:
// Sample Input: madam
// Sample Output: True
// Click me to see the sample solution


#include<bits/stdc++.h>
using namespace std;

int main()
{

}



// 11. Write a C++ program to find a word in a given string which has the highest number of repeated letters. Go to the editor
// Example:
// Sample Input: Print a welcome text in a separate line.
// Sample Output: Word which has the highest number of repeated letters. separate
// Click me to see the sample solution

// 12. Write a C++ program to insert a dash character (-) between two odd numbers in a given string of numbers. Go to the editor
// Example:
// Sample Input: 1345789
// Sample Output: Result-> 1-345-789
// Click me to see the sample solution

// 13. Write a C++ program to change the case (lower to upper and upper to lower cases) of each character of a given string. Go to the editor
// Example:
// Sample Input: Pythpn
// Sample Output: pYTHON
// Click me to see the sample solution

//[[[[,,,,,]]]] 14. Write a C++ program to find the numbers in a given string and calculate the sum of all numbers. Go to the editor
// Example:
// Sample Input: w3resource from 2008
// Sample Output: Sum of the numbers: 2011
// Click me to see the sample solution

// 15. Write a C++ program to convert a given non-negative integer to English words. Go to the editor
// Example:
// Sample Input: 12
// Sample Output: Twelve
// Sample Input: 29
// Sample Output: Twenty Nine
// Click me to see the sample solution

// 16. Write a C++ program to find the longest common prefix from a given array of strings. Go to the editor
// Example:
// The longest common prefix is: Pa
// The longest common prefix is: J
// The longest common prefix is:
// Click me to see the sample solution

// 17. Write a C++ program to find all combinations of well-formed brackets from a given paris of parentheses. Go to the editor
// Example:
// n = 2
// [[]] [][]
// n = 3
// [[]] [][] [[[]]] [[][]] [[]][] [][[]] [][][]
// Click me to see the sample solution

// 18. Write a C++ programming to find the length of the longest valid (correct-formed) parentheses substring of a given string. Go to the editor
// Example:
// Original Parentheses string: [[]
// Length of longest parentheses: 2
// Original Parentheses string: [[]]]
// Length of longest parentheses: 4
// Original Parentheses string: ]]]][[[[
// Length of longest parentheses: 0
// Click me to see the sample solution

// 19. A vowel is a syllabic speech sound pronounced without any stricture in the vocal tract. Vowels are one of the two principal classes of speech sounds, the other being the consonant. Go to the editor
// Example:
// Original string: w3resource
// After reversing the vowels of the said string: w3resuorce
// Original string: Python
// After reversing the vowels of the said string: Python
// Original string: Hello
// After reversing the vowels of the said string: Holle
// Original string: USA
// After reversing the vowels of the said string: ASU
// Click me to see the sample solution

// 20. Write a C++ program to find the length of the longest palindrome in a given string (uppercase or lowercase letters). Go to the editor
// Example:
// Original string: w3resource
// After reversing the vowels of the said string: w3resuorce
// Original string: Python
// After reversing the vowels of the said string: Python
// Original string: Hello
// After reversing the vowels of the said string: Holle
// Original string: USA
// After reversing the vowels of the said string: ASU
// Click me to see the sample solution

// 21. Write a C++ program to check whether a given string is a subsequence of another given string. Return 1 for true and 0 for false. Go to the editor
// Example:
// word1: apple
// subse1: apl
// Is subse1 is the subsequence of word1? 1
// word2: apple
// subse2: ppe
// Is subse2 is the subsequence of word2? 1
// word3: ACGGTGTCGTGCTATGCTGATGCTGACTTATATGCTA
// subse3: CGTTCGGCTATGCTTCTACTTATTCTA
// Is subse3 is the subsequence of word3? 1
// word4: CGTTCGGCTATCGTACGTTCTATTCTATGATTTCTAA
// subse4: CGTTCGGCTATGCZTTCTACTTATTCTA
// Is subse4 is the subsequence of word4? 0
// Click me to see the sample solution

// 22. Write a C++ program to remove all special characters from a given string. Go to the editor
// Example:
// Original string: abcd $ js# @acde$
// New string after removing the special characters from the said string:
// abcd js acde
// Click me to see the sample solution

// 23. Write a C++ program that count the number of unique characters of two given strings. Go to the editor
// Example:
// Original Strings:
// String1: Python
// String2: Java
// Total number of unique characters of the said two strings: 9
// Click me to see the sample solution

// 24. Write a C++ program to count number of duplicate characters in a given string. Go to the editor
// Example:
// Original String:
// Total number of unique characters of the said two strings.
// Number of duplicate characters in the said string: 36
// Click me to see the sample solution

// 25. Write a C++ program to find the longest sequence of consecutive ones in a given binary string. Go to the editor
// Example:
// Original Binary String:
// 1100110001
// Longest sequence of consecutive ones of the said binary string:
// 11
// Click me to see the sample solution

// 26. Write a C++ program to check a given string is a title cased string or not. Return "True" if the string is title cased string otherwise "False". Go to the editor
// Example:
// Original String:
// The Quick Brown Fox.
// Check the said string is a title cased string or not!
// True
// Click me to see the sample solution

// 27. Write a C++ program to insert a space when a lower character follows an upper character in a given string. Go to the editor
// Example:
// Original String:
// TheQuickBrownFox.
// Insert white spaces between lower and uppercase Letters in the said string:
// The Quick Brown Fox.
// Click me to see the sample solution

// 28. Write a C++ program to extract the first specified number of vowels from a given string. If the specified number is less than number of vowels present in the string then display "n is less than number of vowels present in the string". Go to the editor
// Example:
// Input a string: Input a number:
// Extract the first n number of vowels from the said string:
// n is less than number of vowels present in the string!
// Click me to see the sample solution

// 29. Write a C++ program to print a given integer with commas as thousands separators. Go to the editor
// Example:
// Input a number:
// Print the said integer with commas as thousands separators:
// 5,000
// Click me to see the sample solution

// 30. Write a C++ program to identify the missing letter in a given string (list of alphabets). The method returns, "There is no missing letter!" if no letters are missing from the string. Go to the editor
// Example:
// Original string: abcdef
// Identify the missing letter in the said string:
// There is no missing letter!
// Click me to see the sample solution

// 31. Write a C++ program to check if a given string contains only uppercase or only lowercase letters. Return "True" if the string is uppercase or lowercase, otherwise "False". Go to the editor
// Example:
// Original string: ABCDEF
// Check whether the said string is uppercase or lowercase: True
// Click me to see the sample solution

// 32. Write a C++ program that takes a string and reverses the words of three or more lengths in a string. Return the new string. As input characters, only spaces and letters are permitted. Go to the editor
// Example:
// Original string: The quick brown fox jumps over the lazy dog
// Reverse the words of three or more lengths of the said string:
// ehT kciuq nworb xof spmuj revo eht yzal god
// Click me to see the sample solution




