#include <iostream>
using namespace std;

/*
This Algorithm is like a voting concept as it sees similar elements consecutively it will increase the vote,
when it detects a different element in a new iteration of the loop it will reduce the vote. Once the vote 
becomes 0, it will update the ans which was previously the majority element to a the new value it sees currently.
The last value stored in ans is the majority element.

The assumptions here is that there is a definitive majority element (n/2).
*/
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

