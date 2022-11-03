#include<iostream>
using namespace std;

void insertionSort(int n, int arr[]){
    
    for(int i = 1; i<n; i++) {
        int temp = arr[i];
        int j = i-1;
        for(; j>=0; j--) {
            
            if(arr[j] > temp) {
                
                arr[j+1] = arr[j];
            }
            else { 
                break;
            }
            
        }
        
        arr[j+1] = temp;  
    } 
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int N;
    cout<<"Enter your Size"<<endl;
    cin>>N;
    int arr[N]; 
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    // int N = sizeof(arr) / sizeof(arr[0]);

    
    insertionSort(N,arr);
    cout << "Sorted array: \n";
    printArray(arr, N);
    return 0;
}