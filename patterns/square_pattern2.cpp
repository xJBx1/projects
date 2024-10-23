#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int disp = 1;
    for(int i=0; i<n; i++){
        for(int j=1; j<=n; j++){
            cout << disp << " ";
            disp++;
        }
        cout << "\n";
    }
    return 0;
}