//Rectangle Area

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Rectangle
{
  public:
     int lenth;
    int height;
    void pri()
    {
        
        cin>>lenth;
        
        cin>>height;
        cout<<lenth<<" "<<height<<endl;
    }
};
class RectangleArea : public Rectangle
{
    public:
        void om()
        {
            int area;
            area=lenth*height;
            cout<<area;
        }  
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
     RectangleArea aa;
     aa.pri();
     aa.om();
    return 0;
}
