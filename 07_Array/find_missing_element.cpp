//brute force 
int missingNumber(vector<int>& a, int N) {
    for (int i = 1; i <= N; i++) {
        int flag = 0;
        for (int j = 0; j < N; j++) {
            if (a[j] == i) {
                flag = 1;
                break;
            }
        }

        if (flag == 0) {
            return i;
        }
    }

    return -1;
}
/* 
TC = O(n^2)
SC=O(1)
*/

//better approach : using hashing 
int missingNumber(vector<int>& a, int N) {
   unordered_map<int, int> hash; 
    for (int i = 0; i < N; i++) {
        hash[a[i]]=1;
    }
    for (int i = 1; i <= N; i++) {
            if (hash[i] == 0) {
               return i;
            }
    }

    return -1;
}
/* 
TC = O(2*N)
SC=O(N)
*/

//Optimal1 approach : using sum
int missingNumber(vector<int>& a, int N) {
    int TotalSum = (N*(N+1))/2;
    int Sum=0;
    for (int i = 0; i < N-1; i++) {
        Sum = Sum + a[i];
       
    }
    

    return TotalSum -Sum;
}
/* 
TC = O(N)
SC=O(1)

this approach failed if value of n id 10^5
then Sum value 10^10 overflow .
for optimize it XOR is used 
*/





/*Optimal2 approach : using XOR*/

int missingNumber(vector<int>& a, int N) {
   int XOR1, XOR2;
    for (int i = 1; i <=N; i++) {
        XOR1 = XOR1^i;
       
       
    }
    for (int i = 0; i <N-1; i++) {
        XOR2 = XOR2^a[i];
       
       
    }
    return XOR1^XOR2;

}

/*
TC = O(2*N)
SC=O(1)
//there is one more problem in this TC is O(2*N )to reduce this we use another way .


*/

int missingNumber(vector<int>& a, int N) {
    int XOR1 = 0, XOR2 = 0;

    for (int i = 0; i < N-1; i++) {
        XOR2 = XOR2 ^ a[i];
        XOR1 = XOR1 ^ (i + 1);
    }

    XOR1 = XOR1 ^ N;
    return XOR1 ^ XOR2;
}
/*
TC = O(N)
SC=O(1)
this is a optimize solution 
*/