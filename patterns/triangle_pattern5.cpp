#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;
    int num = 1;
    for(int i=n; i>0; i--){
        for(int k=0; k<n-i; k++){
            cout << " ";
        }
        for(int j=i; j>0; j--){
            cout << num;
        }
        cout << endl;
        num++;
    }

    return 0;
}
