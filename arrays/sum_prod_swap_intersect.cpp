#include "array_funcs.h"

int main() {
    int l1, l2;
    cout << "How many elements in first array? ";
    cin >> l1;
    cout << "How many elements in second array? ";
    cin >> l2;

    int arr1[l1], arr2[l2];
    cout << endl << "Enter elements for array 1:" << endl;
    for(int i=0; i<l1; i++){
        cin >> arr1[i];
    }

    cout << "Enter elements for array 2: " << endl;
    for(int i=0; i<l2; i++){
        cin >> arr2[i];

    }

    cout << "The first array is : ";
    for(int i=0; i<l1; i++){
        cout << arr1[i] << " ";
    }
    cout << endl << "The second array is: ";
    for(int i=0; i<l2; i++){
        cout << arr2[i] << " ";
    }

    cout << endl << "The sum of elements for the first array is: " << array_sum(arr1,l1) << endl;
    cout << "The sum of elements for the second array is: " << array_sum(arr2,l2) << endl;
    cout << "The product of elements for the first array is: " << array_prod(arr1,l1) << endl;
    cout << "The product of elements for the second array is: " << array_prod(arr2,l2) << endl;

    max_min_swap(arr1,l1); 
    cout << "The first array with max and min swapped is : ";
    for(int i=0; i<l1; i++){
        cout << arr1[i] << " ";
    }
    max_min_swap(arr2,l2);
    cout << endl << "The second array with max and min swapped is: ";
    for(int i=0; i<l2; i++){
        cout << arr2[i] << " ";
    }
    cout << endl << "The unique elements in the first array are: ";
    arr_uniques(arr1,l1);
    cout << endl;
    cout << "The unique elements in the second array are: ";
    arr_uniques(arr2,l2);

    cout << endl << "The intersection of the two arrays are: ";
    arr_intersection(arr1, arr2,l1,l2);

    return 0;
}