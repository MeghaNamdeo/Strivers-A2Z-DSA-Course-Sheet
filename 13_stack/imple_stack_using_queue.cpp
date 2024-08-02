class Stack {

   public:
   //create two queue
   queue<int>q1,q2;
    Stack() {
       
    }

   
    int getSize() {

        q1.size();
    }

    bool isEmpty() {
       return q1.empty()&&q2.empty();
    }

    void push(int element) {
        //step 1 : Push the value to q2.
       q2.push(element);
       //step 2: Move all elements from q1 to q2
       while(!q1.empty())
       {
           q2.push(q1.front());
           q1.pop();
       }
       //step 3:Swap q1 and q2.
       swap(q1,q2);
    }

    int pop() {
        if(q1.empty())
        {
            return -1;
        }
        int val = q1.front();
        q1.pop();
        return val;
    }

    int top() {
       return  q1.front();
    }
};
/*
Time Complexity:

- push(): O(n)
- pop(): O(1)
- top(): O(1)
- isEmpty(): O(1)
- getSize(): O(1)

Space Complexity: O(n)
*/



//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};


int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        QueueStack *qs = new QueueStack();

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            qs->push(a);
        }else if(QueryType==2){
            cout<<qs->pop()<<" ";

        }
        }
        cout<<endl;
    }
}

// } Driver Code Ends


/* The structure of the class is
class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};
 */

//Function to push an element into stack using two queues.
void QueueStack :: push(int x)
{
    //step `1: Push element onto q2
       q2.push(x);
     //step 2:Move all elements from q1 to q2 
        while (!q1.empty()) {
           q2.push(q1.front());
           q1.pop();
        }
        
    //step 3:- Swap q1 and q2
        swap(q1,q2);
}

 
int QueueStack :: pop()
{
    
    //step 1: If the queue is empty, return -1.
       if  (q1.empty())
       {
           return -1;
       }
       //step 2: Store the front element of q1.
       int val = q1.front();
       //step 3:  Pop the front element of q1
       q1.pop();
       //step 4:  Return the top element.
       return val;
}/*
Time Complexity:

- Push: O(n)
- Pop: O(1)

Space Complexity:

- O(n)

*/

