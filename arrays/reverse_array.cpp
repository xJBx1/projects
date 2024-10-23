#include <iostream>
using namespace std;

void reverse(int arr[], int size);
void reverse(int arr[], int size){
    int end = size-1;
    int tmp;
    for(int i=0; i<size/2; i++){
        tmp = arr[end];
        arr[end] = arr[i];
        arr[i] = tmp;
        end--;
    } //alternatively directly use swap function!
}

int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr)/sizeof(int);
    cout << "Initial array is: ";
    for(int i=0; i<size; i++){
        cout << arr[i];
    }
    cout << endl;
    reverse(arr, size);
    cout << "Reversed array is: ";
    for(int i=0; i<size; i++){
        cout << arr[i];
    }
    
    
    return 0;
}

