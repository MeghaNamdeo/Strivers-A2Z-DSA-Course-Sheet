//brute force 
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