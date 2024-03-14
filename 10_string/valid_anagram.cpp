//brute force 
class Solution
{
    public:
    
    bool isAnagram(string a, string b){
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        
        return (a==b);
        
        
    }

};

/* Time Complexity : O(n log n) 
space complexity : O(1) 

*/


//better approach 
 bool isAnagram(string a, string b){
       map<char, int> freqa;
       map<char,int>freqb;

        for (int i = 0; i < a.size(); i++)
        {
            freqa[a[i]]++;
        }

        for (int i = 0; i < b.size(); i++)
        {
            freqb[b[i]]++;
        }

        return freqa==freqb;
        
    }


//Time complexity : O(N) , Space complexity :O(N)

