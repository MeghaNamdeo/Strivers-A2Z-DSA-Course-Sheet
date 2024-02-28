/*
CPP STL is divided into 4 parts 
1.Algorithm
2.Container
3.Functions
4.Iterators

*/
#include<bits/stdc++.h>
using namespace std;
void explainPair()
{
    pair<int,int>p = {1,30};
    cout<< p.first <<" "<< p.second<<endl ; //output 1  30
    
    pair<int,pair<int,int>>q={1,{3,4}};
    cout<<q.first<<" "<<q.second.second<<" "<<q.second.first<<endl;//output 1 4 3
    
    pair<int,int>arr[]={{1,2},{2,5},{5,1}};
    cout<<arr[1].second<<endl; //output 5


}

int main(){
    explainPair();
    return 0;
}


