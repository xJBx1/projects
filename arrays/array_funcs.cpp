#include <iostream>
#include <algorithm>
using namespace std;
int array_sum(int arr[], int size){
    int sum=0;
    for(int i=0; i<size; i++){
        sum += arr[i];
    }
    return sum;
}

int array_prod(int arr[], int size){
    int prod=1;
    for(int i=0; i<size; i++){
        prod *= arr[i];
    }
    return prod;
}

void max_min_swap(int arr[], int size){
    int max=arr[0], min=arr[0];
    for(int i=1; i<size;i++){
        if(arr[i]<min){
            min = i;
        }
        if(arr[i]>max){
            max = i;
        }
    }
    swap(arr[min], arr[max]);
    
}

void arr_uniques(int arr[], int size){
    cout << arr[0] << endl;
    for(int i=1; i<size; i++){
        bool unique = true;
        for(int j=0; j<i; j++){
            if(arr[j]==arr[i]){
                unique = false;
                break;
            }
        }
        if(unique) cout << arr[i] << " ";
    }
}

void arr_intersection(int arr[], int arr2[], int size, int size2){
    sort(arr, arr+size);
    sort(arr2, arr2+size2);
    int i,j=0;

    while (i<size && j<size2){
        if(arr[i]==arr2[j]){
            cout << arr[i] << " ";
            i++;
            j++;
        } else if(arr[i]>arr2[j]){
            j++;
        } else if(arr[i]<arr2[j]){
            i++;
        } 
    }
}