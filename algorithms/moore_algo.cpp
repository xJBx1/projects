#include <iostream>
using namespace std;

int main()
{
    int arr[9] = {1, 3, 5, 5, 3, 3, 1, 3, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    //int threshold = n/2;
    int vote=0;
    int ans = 0;
    for(int i=0; i<n; i++){
        if(vote==0){
            ans = arr[i];
        }
        if(ans == arr[i]){
            vote++;
        }else {
            vote--;
        }
    }
    cout << "The majority element is: " << ans << endl;

    return 0;
}

