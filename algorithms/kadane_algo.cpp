#include <iostream>
using namespace std;

/*
Here the algorithm adds each element in the sum and keeps doing so until the sum goes negative,
once this happens it just sets the sum back to 0, so that in essence the previous sub-array doesn't
have a higher sum than recorded and is disregarded. This way we loop the array once keeping time 
complexity O(n).
*/

int main() {

    int arr[10] = {1, 9, -8, 4, -5, -6, 10, 3, 2, -1};
    int max_sum=0;
    int sum = 0;

    for(int i=0; i<10; i++){
        sum += arr[i];
        if(sum<0){sum=0;}
        max_sum = max(max_sum, sum);
    }
    cout << "The max sum is: " << max_sum << endl;

    return 0;
}