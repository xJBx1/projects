#include <iostream>
using namespace std;

int sum_digits(int n);
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << endl;
    cout << "The sum of the digits of " << n << " is: " << sum_digits(n);

    return 0;
}
int sum_digits(int n){
    int sum=0;
    while(n>0){
        int tsum = n%10;
        sum += tsum;
        n/=10;
    }
    return sum;
}
