#include <bits/stdc++.h>

int convert(int N,string &str)
{
N=0;
int len = str.length();
int p2 = 1;
for(int i = len -1 ; i >=0 ;i--)
{
    if(str[i]=='1')
    {
        N = N + p2;

    }
    p2=p2*2;
}
return N;

}
/*
TC :O(n)
SC :O(1)
*/

