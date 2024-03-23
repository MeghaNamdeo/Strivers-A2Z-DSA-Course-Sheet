int findXOR(int L, int R){
   int ans =0;
   for(int i = L ; i <= R;i++)
   {
       ans   = ans ^ i;
   }
   return ans;
}

/*
Time Complexity (TC): O(R - L)
Space Complexity (SC): O(1)
*/
