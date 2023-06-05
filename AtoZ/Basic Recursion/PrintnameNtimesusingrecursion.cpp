#include<iostream>
using namespace std;
void namep(int i,int n)
{
    if(i>=n)
    {
        return;
    }
    cout<<"priyanshu"<<endl;
    namep(i+1,n);
}
int main()
{
    int n;
    cin>>n;
    namep(0,n);
}