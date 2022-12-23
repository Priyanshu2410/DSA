// C) Write a program to read 10 integers in an array. Sort them out on the basis of number of digits
// in each element.

#include <iostream>
    using namespace std;
int main()
{
    int size = 10, a;
    int arr[size];
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
    cout << "The numbers in sorted form are:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
