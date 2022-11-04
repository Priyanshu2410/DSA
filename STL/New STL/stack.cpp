#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string>s;
    s.push("priyanshu");
    s.push("om");
    s.push("mann");
    
    cout<<"top element "<<s.top()<<endl;
    s.pop();
    cout<<"top element "<<s.top()<<endl;
    cout<<"size of stack is "<<s.size()<<endl;
    cout<<"stack empty or not "<<s.empty()<<endl;

}
