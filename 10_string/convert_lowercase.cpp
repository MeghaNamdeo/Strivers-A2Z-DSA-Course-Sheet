string lowerCase(string &str)
{
    for(int i =0;i<str.length();i++)
    {
        str[i]=str[i]-'A'+'a';
    }
    return str;
}

//time complexity : O(n), space complexity : O(1);