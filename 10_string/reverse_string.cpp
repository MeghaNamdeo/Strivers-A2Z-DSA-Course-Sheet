//brute force 
string reverseWord(string str)
    {
      
    string ans ="";  
    int n = str.length()-1;
    for(int i = n ; i>=0;i-- )
    {
        ans=ans+str[i];
    }
    return ans;
    }
};
//TC :O(n)
//SC:O(n)


#include <bits/stdc++.h> 
string reverseString(string str)
{
int start =0,end = str.length()-1;
while(start<=end)
{
	swap(str[start],str[end]);
	start++;
	end--;
}
return str;
}
/*
time complexity : O(n)   , space complexity : O(1)

using for loop

string reverseString(string str)
{
int start =0,end = str.length()-1;
for(;start<=end;)
{
	swap(str[start],str[end]);
	start++;
	end--;
}
return str;
}
*/

//using stack
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

