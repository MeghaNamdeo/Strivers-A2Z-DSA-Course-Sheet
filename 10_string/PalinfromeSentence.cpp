#include <bits/stdc++.h> 
using namespace std; 
 
 
 
class Solution{
public:
    bool checkPalindrome(string s)
    {
        int i=0;
        int j = s.length()-1;
        for(;i<=j;i++,j--)
        {
           if( s[i]!=s[j])
            {
              return false;
              
            }
        }
        return true;
    }
bool sentencePalindrome(string s) {
    string str;
    for (int i = 0; i < s.length(); i++) {
        
        if (isalnum(s[i]))
              str += s[i];
        
    }
    return checkPalindrome(str);
}
 
};
 
/*time complexity : O(n) space complexity :O(n) */
 
 
 
int main() 
{ 
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        Solution ob;
        cout<<ob.sentencePalindrome(str)<<endl;
    }
    return 0;
}  