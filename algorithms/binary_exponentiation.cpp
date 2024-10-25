#include <iostream>
using namespace std;

int main() {
    int n;
    double x;
    cout << "Give me a base and an exponential: ";
    cin >> x >> n;
    cout << endl;

    long binForm = n;
    if(n<0){
        x = 1/x;
        binForm = -binForm;
    }
    double ans = 1;

    while(binForm>0){
        if(binForm%2 == 1){
            ans*=x;
        }
        x*=x;
        binForm /= 2;
    }

    cout << "The answer is: " << ans;

    return 0;
}