class Solution {
  public:
    string toLower(string s) {
        for(int i =0; i < s.length();i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
            s[i]=s[i]+'a'-'A';
            }
        }
        return s;
    }
};

//time complexity : O(n), space complexity : O(1)

