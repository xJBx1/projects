#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int tracker = 1;
    int spaces = -1;
    bool hit_max = false;

    while(tracker!=0){
        if(tracker == n){
            hit_max = true;
        }
        for(int i=0; i<n-tracker; i++){
            cout << " ";
        }
        cout << "*";
        for(int j=0; j<spaces; j++){
            cout << " ";
            if(j==(spaces-1)){
                cout << "*";
            }
        }
        if(hit_max){
            tracker--;
            spaces = spaces - 2;
        } else {
            tracker++;
            spaces = spaces + 2;
        }
        cout << endl;

    }
    return 0;
}
