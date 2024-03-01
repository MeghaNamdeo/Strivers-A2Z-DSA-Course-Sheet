Example:
Input: ‘N’ = 3

Output: 

  *
 ***
*****
*****
 ***
  *

void nStarDiamond(int n) {
   for(int i  = 0 ; i < n ; i++)
   {
       //space
       for(int s = 0 ; s < n- i - 1 ; s++)
       {
           cout<<" ";
       }

       //star
       for(int st = 0 ; st < 2 * i + 1 ; st++)
       {
           cout<<"*";
       }
       //space  
       for(int s = 0 ; s < n- i - 1 ; s++)
       {
           cout<<" ";
       }
       cout<<endl;


   }
   for(int i  = 0 ; i < n ; i++)
   {
       //space
       for(int s = 0 ; s <  i ; s++)
       {
           cout<<" ";
       }

       //star
       for(int st = 0 ; st < 2 * n - 2 * i  - 1 ; st++)
       {
           cout<<"*";
       }
       //space  
       for(int s = 0 ; s <  i ; s++)
       {
           cout<<" ";
       }
       cout<<endl;


   }
}
