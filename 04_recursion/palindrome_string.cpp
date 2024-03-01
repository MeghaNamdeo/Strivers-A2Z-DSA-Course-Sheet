void strings(string& str, int s , int e)
{
    if(s>=e)return;
    swap(str[s],str[e]);
    strings(str,s+1,e-1);
}
bool isPalindrome(string& str) {
    string original=str;
    int s = 0;
    int e = str.length()-1;
    strings(str,s,e);
    return (original==str);
}
