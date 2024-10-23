#include "prime_fibonacci_func.cpp"

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << print_fib(n) << " is the " << n << "th Fibonacci";
    return 0;
}