#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;
    int stars = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<stars; j++){
            cout << "*";
        }
        cout << endl;
        stars++;
    }

    return 0;
}

