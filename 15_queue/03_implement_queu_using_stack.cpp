/*most CPP easy solution 


Here is the pseudocode with step-by-step details:


Class MyQueue
  Initialize two stacks, s1 and s2

  Procedure push(x)
    Step 1: Push x onto stack s1

  Procedure pop()
    Step 1: Check if stack s2 is empty
    Step 2: If s2 is empty, transfer all elements from s1 to s2
      Step 2.1: While stack s1 is not empty
        Step 2.2: Pop top element from s1 and push onto s2
    Step 3: Pop top element from s2 and return it

  Procedure peek()
    Step 1: Check if stack s2 is empty
    Step 2: If s2 is empty, transfer all elements from s1 to s2
      Step 2.1: While stack s1 is not empty
        Step 2.2: Pop top element from s1 and push onto s2
    Step 3: Return top element from s2

  Procedure empty()
    Step 1: Check if both stacks s1 and s2 are empty
    Step 2: Return true if both are empty, false otherwise
    
*/

class MyQueue {
public:
 stack<int>s1,s2;

    MyQueue() {
       

    }
    
    void push(int x)
    {
       s1.push(x);        
    }
    
    int pop() {
        if(s2.empty())
        {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }

        }
        int temp = s2.top();
        s2.pop();
        return temp;
        
    }
    
    int peek() {
        if(s2.empty())
        {
           while(!s1.empty())
           {
            s2.push(s1.top());
            s1.pop();
           }
        }
        return s2.top();


        
    }
    
    bool empty() {
        return s1.empty()&&s2.empty();
        
    }
};

/*
 TC and SC :O(n)
 */


 class Queue {
    stack<int>s1,s2;
public:

    void enqueue(int x) {
       s1.push(x); 
    }

    int dequeue() {
        if(s2.empty())
        {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
                
            }
        }
        if(!s2.empty())
        {
            int ans = s2.top();
            s2.pop();
            return ans;
        }
        return -1;
    }
};
/*
 TC for enqueue : O(1)
 TC for dequeue:O(n)
 SC : O(n)
*/