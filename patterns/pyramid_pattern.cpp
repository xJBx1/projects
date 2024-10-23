#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;
    int k;
    for(int i=1; i<=n; i++){
        for(int j=0; j<= n-i; j++){
            cout << " ";
        }
        for(k=1; k<=i; k++){
            cout << k;
        }
        for(int l=k-2; l>=1; l--){
            cout << l;
        }
        cout << endl;
    }

    return 0;
}
