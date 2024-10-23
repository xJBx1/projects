#include <iostream>

using namespace std;

int calculate_factorial(int n);
int main()
{
    int n,r;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter r: ";
    cin >> r;

    cout << "The binomial coefficient for " << n << " & " << r << " is: ";
    cout << (float)(calculate_factorial(n))/((float)(calculate_factorial(r))*calculate_factorial(n-r));
    cout << endl;
    return 0;
}

int calculate_factorial(int n){
    if(n > 1) return n * calculate_factorial(n - 1);
    else return 1;
}