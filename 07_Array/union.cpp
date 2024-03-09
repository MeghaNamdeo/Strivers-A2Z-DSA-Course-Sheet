
//brute force 



#include<map>
using namespace std ;
//using map
vector < int > sortedArray(vector < int > a, vector < int > b) {
    
    int n = a.size();
    int m = b.size();
    vector<int>sortedArray;
    map<int,int>freq;

    for(int i = 0 ; i < n ; i++)
    {
        freq[a[i]]++;

    }
    for(int i =  0 ; i < m ; i++)
    {
        freq[b[i]]++;
        
    }
    
    
   for(auto i : freq)
   {
       sortedArray.push_back(i.first);
   }
    return sortedArray;
    
}
 /*
Time Complexity: O(n + m + (n+m)log(n+m)) - Inserting elements into set and converting set to vector
Space Complexity: O(n + m) - Additional space for the set and output vector
*/ 

//using set 
#include<vector>
#include<set>
using namespace std ;

vector < int > sortedArray(vector < int > a, vector < int > b) {
    
    int n = a.size();
    int m = b.size();

    set<int> st;

    for(int i = 0 ; i < n ; i++)
    {
        st.insert(a[i]);

    }
    for(int i =  0 ; i < m ; i++)
    {
        st.insert(b[i]);
        
    }
    
    
    vector<int> sortedVector(st.begin(), st.end());

    return sortedVector;
    
}
 /*
Time Complexity: O(n + m + (n+m)log(n+m)) - Inserting elements into set and converting set to vector
Space Complexity: O(n + m) - Additional space for the set and output vector
*/ 


//using two pointer optimal solution 

