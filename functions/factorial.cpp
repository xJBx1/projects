#include <iostream>
using namespace std;

int calculate_factorial(int n);
int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    cout << endl;
    cout << "The factorial of " << n << " is: "<< calculate_factorial(n);

    return 0;
}


int calculate_factorial(int n){
    if(n > 1) return n * calculate_factorial(n - 1);
    else return 1;
}