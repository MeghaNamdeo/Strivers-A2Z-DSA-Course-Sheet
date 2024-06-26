void MyStack :: push(int x)
{
    int MAXSIZE= 1000;
    if(top == MAXSIZE -1 )
    {
        return ;
    }
    else
    {
        top++;
        arr[top]=x;
    }
}

//Function to remove an item from top of the stack.
int MyStack :: pop()
{
    if(top == -1)
    {
        return -1;
    }
    else
    {
        int n = arr[top];
        top--;
        return n;
    }
    
}
/*
TC : O(1)
SC : O(MAXSIZE)
*/