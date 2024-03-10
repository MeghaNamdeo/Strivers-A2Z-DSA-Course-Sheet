//brute force 
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