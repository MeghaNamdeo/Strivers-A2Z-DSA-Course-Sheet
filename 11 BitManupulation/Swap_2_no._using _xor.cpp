
//Using Bit Manupulation
class Solution{   
public:
    pair<int, int> get(int a, int b){
      
      a = a^b;
      b = a^b;
      a = a^b;
      
      return {a,b};
    }
};

/*

TC : O(1)
SC : O(1)

*/