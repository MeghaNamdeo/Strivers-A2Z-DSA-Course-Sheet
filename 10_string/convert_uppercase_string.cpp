//brute force 
#include <bits/stdc++.h> 
string upperCase(string &str)
{
    for(int i =0;i<str.length();i++)
    {
        str[i]=str[i]-'a'+'A';
    }
    return str;
}
//time complexity : O(n), space complexity :O(1)

//using inbuilt function
#include <bits/stdc++.h> 
string upperCase(string &str)
{
   for (int i = 0; i < str.length(); ++i) {
        str[i] = toupper(str[i]);
    }
    return str;
}
//time complexity : O(n), space complexity :O(1)