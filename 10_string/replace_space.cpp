  //using getline
    string modify(string s)
    {
      getline(cin, s);
      //or
      //cin.getline(s,s.length);
      return s;
    }
Time Complexity (TC): O(N)
Space Complexity (SC): O(N)

//using loop and replace function
#include <bits/stdc++.h> 
string replaceSpaces(string &str) {

    for (int i = 0; i < str.length(); i++) {

        if (str[i] == ' ') {

            // char to replace ='i' , no of char=1,replace with '@40'

            str.replace(i, 1, "@40");

            }

        }

    return str;

}

