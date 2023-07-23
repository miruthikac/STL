#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string getLongestPalindrome(string s) {
   int n = s.size();
   int index  = -1, palindromeLength = 0;
   for (int i = 0; i < n; i++) {
       for (int j = i; j < n; j++) {
           int isPalindrome = 1;
           for (int k = i; k <= j; k++) {
               if (s[k] != s[j - (k - i)]) {
                   isPalindrome = 0;
               }
           }
           if (isPalindrome == 1 && j - i + 1 > palindromeLength) {
               index = i;
               palindromeLength = j - i + 1;
           }
       }
   }
   string ans = "";
   for (int i = index; i < index + palindromeLength; i++) {
       ans += s[i];
   }
   return ans;
}
int main()
{
    string str="badcdcvv";
    string result=getLongestPalindrome(str);
    cout<<"Longest palindrome :"<<result<<endl;
    return 0;
}