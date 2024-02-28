/*
Input: ‘N’ = 3

Output: 

A B C
A B
A

*/
void nLetterTriangle(int n) {
  
  for(int i = 1 ; i <= n ; i++)
  {
      for(char ch = 'A'; ch<= 'A'+(n - i );ch++)
      {
        cout<<ch<<" ";
      }
      cout<<endl;
  }
}
