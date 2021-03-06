#include <iostream>
#include <math.h>

using namespace std;

int basic_prime[25] = {3, 5, 7, 11, 13, 15, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};


int get_integer(string msg = "Number: ") {
    int i;
    cout << msg;
    cin >> i;
    return i;
}

double get_float(string msg = "Number: ") {
    double f;
    cout << msg;
    cin >> f;
    return f;
}

bool isodd(int num) {
    bool odd = false;
    if (num % 2) {
        odd = true;
    }
    return odd;
}

bool iseven(int num) {
    bool even = true;
    if (num % 2) {
        even = false;
    }
    return even;
}

bool isprime(int num) {
    bool prime = true;
    if (iseven(num) and num / 2 != 1) {
        prime = false;
    }
    if (isodd(num)) {
        for (int i = 0; i < 25; i++) {
            if (num % basic_prime[i] == 0 and num / basic_prime[i] != 1) {
                prime = false;
            }
        }
        if (prime) {
            for (int i = 101; i < (sqrt(num) + 1); i++) {
                if (num % i == 0) {
                    prime = false;
                    break;
                }
            }
        }
    }
    return prime;
}

int factorial(int num) {
    int f = 1;
    for (int i = 1; i <= num; i++) {
        f *= i;
    }
    return f;
}

