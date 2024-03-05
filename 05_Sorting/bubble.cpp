class Solution
{
    public:
    //Function to sort the array using bubble sort algorithm.
//     void bubbleSort(int arr[], int n)
//     {
//       for(int i = n - 1 ; i >= 1 ;i-- )
//       {
           
//       for(int j= 0 ; j <= i- 1; j++){
//           if(arr[j]>arr[j+1])
//           {
//               swap(arr[j],arr[j+1]);
//           }
//           }
//       }
//     }
// };
//for Average case and Worst Case
//Time Complexity : O(n)  , n + (n -1)+ (n-2)...........1 = n (n +1)/2

  //Function to sort the array using bubble sort algorithm.
    void bubbleSort(int arr[], int n)
    {
        int didswap=0;
       for(int i = n - 1 ; i >= 1 ;i-- )
       {
           
       for(int j= 0 ; j <= i- 1; j++){
           if(arr[j]>arr[j+1])
           {
               swap(arr[j],arr[j+1]);
               didswap=1;
           }
          }
          if(didswap==0)
          {
              break;
          }
       }
       
    }
};
//best case Time Complexity : O(n)
// because no swap happened 