#include <bits/stdc++.h> 
int countDigit(long long x) {
    int count = 0 ; 
    while(x > 0)
    {
        int last_digit = x %10;
        count++;
        x = x /10;
        
    }
    return count;
}

//or using log 

#include <bits/stdc++.h> 
int countDigit(long long x) {
int count = (int)(log10(x)+1);
return count;
}