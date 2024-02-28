class Solution {
public:
    long long  isrev(long long  n) {
        long long  rev = 0;
        while (n > 0) {
            long long  last_dig = n % 10;
            rev = (rev * 10) + last_dig;
            n = n / 10;
        }
        return rev;
    }

    bool isPalindrome(int x) {
        return x == isrev(x);
    }
};
