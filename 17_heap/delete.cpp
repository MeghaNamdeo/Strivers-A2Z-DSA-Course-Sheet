class Heap{
    public:
    int arr[101];
    int size;
    
    Heap(){
        size =0;
    }
    int delete ()
    {
        int ans = arr[1];
        //step 1 : replace root node value with last node 
        arr[1]=arr[size];
        size--;
        //place root node ka data on its coorect position 
        int index = 1;
        while(index < size )
        {
            int left = 2 * index ;
            int right = 2 * index + 1;
            
            int largest = index ;
            if(left  < size && arr[largest]<arr[left])
            {
                largest= left;
            }
            if(right  < size && arr[largest]<arr[right])
            {
                largest= right;
            }
            if(largest == index )
            {
                //value is at correct position
                 break;
            }
            else 
            {
              swap(arr[index],arr[largest]);
              index = largest;
            }
            
        }
        return ans;
    }
}
/* TC : O(log n)
SC: O(1)*/