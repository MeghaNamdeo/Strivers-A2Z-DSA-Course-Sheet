class Solution {
public:
    void reverseString(vector<char>& str) {
        stack<char> st;
        for (int i = 0; i < str.size(); i++) {
            st.push(str[i]);
        }
        
        for (int i = 0; i < str.size(); i++) {
            str[i] = st.top();
            st.pop();
        }
    }

        
    };
    /*
     tc : O(n)
     sc : O(n)
     */


     #include <bits/stdc++.h> 
string reverseString(string str)
{
	stack<char>st;
	for(int i =0;i<str.length();i++)
	{
		st.push(str[i]);
	}
	string ans ="";
	while(!st.empty())
	{
		ans = ans + st.top();
		st.pop();
	}
	return ans;
}
/* TC :O(n) SC : O(n)*/