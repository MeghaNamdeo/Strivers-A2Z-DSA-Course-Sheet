int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
     set<int>st;
      for(int i =0 ; i < n;i++)
      {
          st.insert(a[i]);
      }
      int c=0;
        for(int i=0;i<m;i++)
        {int key = b[i];
            if (st.find(key) != st.end()) {
                c++;
                st.erase(key);
            }
        }
        return c;
    }