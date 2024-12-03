bool isValidParenthesis(string s)
{
  stack<int>st;
  for(int i=0;i<s.length();i++)
  {
      if(s[i]=='('||s[i]=='{'||s[i]=='[')
      st.push(s[i]);
      else
      {
        if(st.empty())return 0;
        else st.pop();
      }
  }
  return st.empty();
}
//TC and SC:O(n)
