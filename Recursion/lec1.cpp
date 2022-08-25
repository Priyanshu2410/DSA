#include<iostream>
using namespace std;

// It lead us to infinity

// void print()
// {
//     cout<<"priyanshu"<<endl;
//     print();
// }


// int main()
// {
//     print();
// }

// print 0-5 with base condition
int count=0;
void print()
{
    if(count==6)
    {
        return;
    }
    else
    {
        cout<<count<<endl;
        count++;
        print();
    }
}
int main()
{
    print();
    return 0;
}