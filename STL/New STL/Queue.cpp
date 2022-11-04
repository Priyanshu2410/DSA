#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<string>q;
    q.push("priyanshu");
    q.push("om");
    q.push("mann");

    cout<<"first element "<<q.front()<<endl;
    q.pop();
    cout<<"first element "<<q.front()<<endl;
    
}