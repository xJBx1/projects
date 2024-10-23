#include <iostream>
using namespace std;

int main()
{
    int tester[10] = {15, -9000, 66, 75, 2, 31, -16, 8, 10, 44};
    int max = tester[0];
    int min = tester[0];

    for(int i=1; i<10; i++){
        if(tester[i] > max){
            max = tester[i];
        }
        if(tester[i] < min){
            min = tester[i];
        }
    }
    cout << min << endl << max;
    return 0;
}

