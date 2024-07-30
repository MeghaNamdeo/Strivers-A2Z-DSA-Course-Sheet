
#include <iostream>
using namespace std;
class Heap{
    public :
    int arr[101];
    int size;
    Heap()
    {
        size=0;
    }
    

void insert(int value)
{
    //value insert kr di end me 
    size = size+ 1;
    int index = size;
    arr[index]=value;
    
    //iss value ko place at right position
    while(index > 1)
    {
        int parentIndex = index / 2;
        if(arr[index]>arr[parentIndex])
        {
            swap(arr[index],arr[parentIndex]);
            index = parentIndex;
            
        }
        else
        {
            break;
        }
    }
    
}
};
int main()
{
    Heap h;
    h.arr[0]=-1;
    h.arr[1]=100;
    h.arr[2]=50;
    h.arr[3]=60;
    h.arr[4]=40;
    h.arr[5]=45;
    h.size = 5;
    cout<<" Printing heap : "<<endl;
    for(int i =0;i<= h.size;i++)
    {
        cout<<h.arr[i]<<" ";
    }
    
    cout<<"\n";
    h.insert(110);
    for(int i =0;i<= h.size;i++)
    {
        cout<<h.arr[i]<<" ";
    }
    
    cout<<"\n";
    h.insert(200);
     for(int i =0;i<= h.size;i++)
    {
        cout<<h.arr[i]<<" ";
    }
    
    cout<<"\n";

    return 0;
}
/*
Printing heap : 
-1 100 50 60 40 45 
-1 110 100 60 50 45 
-1 200 110 100 60 50 
*/

#include <vector>
#include <algorithm>
using namespace std;

class Heap {
private:
    vector<int> arr;

public:
    Heap() {}

    void insert(int val) {
        arr.push_back(val);

        int index = arr.size() ;

        while (index > 1) {
            int parentIndex = (index) / 2;
            if (arr[index] > arr[parentIndex]) {
                swap(arr[index], arr[parentIndex]);
                index = parentIndex;
            } else {
                break;
            }
        }
    }
};
