#include <bits/stdc++.h> 

// Brute force method to find GCD
int findGcd(int a, int b) {
    int gcd= 1;
    for(int i = 1; i <= std::min(a, b); i++) {
        if(a % i == 0 && b % i == 0) {
           gcd = i;
        }
    }
    
    return gcd;
}
//or 

#include <bits/stdc++.h> 
using namespace std;
//another  Brute force method to find GCD
int findGcd(int a, int b) {
    int gcd= 1;
    for(int i = min(a, b); i>=1; i--) {
        if(a % i == 0 && b % i == 0) {
           gcd = i;
           break;
        }
    }
    
    return gcd;
}

//time complexity  : O(min(a,b));