#include <iostream>
using namespace std;
void change(int a);
int main()
{
int a = 1;
change(a);
cout<<"Value of a is "<<a<<endl;
return 0;
}
void change(int a)
{
a = 3;
}

// CALL BY REFERENCE:

#include <iostream>
using namespace std;
void swap(int *x,int *y)
{
int swap;
swap = *x;
*x = *y;
*y = swap;
}
int main()
{
int x = 100,y = 200;
swap(&x, &y);
cout << "The value of x is " << x << endl;
cout << "The value of y is " << y << endl;
return 0;
}


