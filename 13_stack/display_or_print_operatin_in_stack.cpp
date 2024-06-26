void MyStack::display()
{
    if(top ==  -1 )
    {
        cout<<"\nStack is empty ";
    }
    else
    {
        cout<<"Stack Element : ";
        for(int i = top ; i >=0; i--)
        {
            cout<<stack[i]<<"\n";
        }
    }
}

/* TC :O(n)
SC : O(MAXSIZE)
*/