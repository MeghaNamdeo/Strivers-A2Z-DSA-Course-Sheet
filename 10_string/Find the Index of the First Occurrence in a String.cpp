class Solution {
public:
    int strStr(string haystack, string needle) {
        int haystack_size = haystack.size();
        int needle_size = needle.size();

        
        if (needle_size == 0)
            return 0;

        
        if (haystack_size < needle_size)
            return -1;

       
        for (int i = 0; i <= haystack_size - needle_size; i++) {
            int j;
            
            for (j = 0; j < needle_size; j++) {
                if (haystack[i + j] != needle[j])
                    break;
            }
            
            if (j == needle_size)
                return i;
        }

        
        return -1;
    }
};

/*

Time Complexity (TC): O(n * m)
n is the length of the haystack string.
m is the length of the needle string.
Space Complexity (SC): O(1)

*/
