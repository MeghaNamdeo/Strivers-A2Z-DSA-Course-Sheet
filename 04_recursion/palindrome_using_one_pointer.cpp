void strings(string& str, int i)
{
    int n = str.length();
    if(i>=n/2)return;
    swap(str[i],str[n-i-1]);
    strings(str,i+1);
}
bool isPalindrome(string& str) {
    string original=str;
    int i=0;
    int n = str.length()-1;
    strings(str,i);
    return (original==str);
}
