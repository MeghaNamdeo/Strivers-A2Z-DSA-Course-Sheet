//brute force 
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

bool checkPalindrome(char str[]) {
   
   string originalstr= str;
   string revStr=reverseString( str );
   if(originalstr==revStr)
   return true;
   else 
   return false;
}

//time complexity : O(n), space complexity : O(1)
