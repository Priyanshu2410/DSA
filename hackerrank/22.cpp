//Multi Level Inheritance

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class a
{
    public:
        void input()
        {
            cout<<"I am an equilateral triangle"<<endl;
        }
};
class b:public a
{
    public:
        void display()
        {
            cout<<"I am an isosceles triangle"<<endl;
        }
};
class c:public b
{
    public:
        void getdata()
        {
            cout<<"I am a triangle"<<endl;
        }
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    c aa;
    aa.input();
    aa.display();
    aa.getdata();
    return 0;
}
