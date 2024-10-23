#include "prime_fibonacci_func.h"

bool is_prime(int n){
    for(int i=2; i<n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

void print_primes(int n){
    for(int i=2; i<=n; i++){
        if(is_prime(i)){
            cout << i << " ";
        }
    }
    return;
}

int print_fib(int n){
    int sum = 0;
    int t1=0;
    int t2=1;
    for(int i=1; i<=n; i++){
        if(i==1) sum+=0;
        else if (i==2) sum+=1;
        else {
            sum = t1+t2;
            t1=t2;
            t2=sum;
        } 
    }
    return sum;
}