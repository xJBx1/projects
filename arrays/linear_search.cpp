#include <iostream>
using namespace std;

void search(int arr[], int size, int target);

void search(int arr[], int size, int target){
    for(int i=0; i<size; i++){
        if(arr[i] == target){
            cout << i;
            return;
        }
    }
    cout << "-1";
}
int main()
{
    int arr[] = {1, 6, 88, 79, 64, -52, -7, 100, 32, 20};
    int size = sizeof(arr)/sizeof(int);
    
    int target;
    cout << "Enter number you want from array: ";
    cin >> target;
    search(arr, size, target);
    return 0;
}

