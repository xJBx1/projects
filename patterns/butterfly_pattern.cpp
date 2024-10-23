#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int tracker = 1;
    bool hit_max = false;

    while(tracker != 0){
        if(tracker == n+1){
            hit_max = true;
            tracker--;
        }
        for(int i=0; i<tracker; i++){
            cout << "*";
        }
        for(int j=0; j<(n-tracker)*2; j++){
            cout << " ";
        }
        for(int i=0; i<tracker; i++){
            cout << "*";
        }
        cout << endl;

        if(hit_max){
            tracker--;
        }else {
            tracker++;
        }
    }
    return 0;
}
