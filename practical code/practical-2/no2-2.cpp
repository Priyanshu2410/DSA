// b)	Write a program to prints array elements in reverse orders applying ppointer
#include <iostream>
using namespace std;
int main()
{
    int arr[5], i;
    int *p = arr;
    cout << "Enter five numbers separated by space:";
    cin >> *p >> *(p + 1) >> *(p + 2) >> *(p + 3) >> *(p + 4);
    cout << "Your entered numbers in reverse order are:\n";
    for (int i = 4; i >= 0; i--)
    {
        cout << *(p + i) << endl;
    }
    return 0;
}
