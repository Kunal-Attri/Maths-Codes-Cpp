#include <iostream>
#include "Basic_Functions.h"

using namespace std;

int main() {
    int t;
    cout << "Numbers of numbers: ";
    cin >> t;
    int x[t];
    cout << "Numbers: ";
    for (int i = 0; i < t; i++) {
        cin >> x[i];
    }
    

    // LCM function
    int larger = x[0];
    for (int i = 0; i < t; i++) {
        if (x[i] > larger) {
            larger = x[i];
        }
    }

    int divisors[larger];
    int divQuan[larger];
    for (int i = 0; i < larger; i++) {
        divisors[i] = 0;
        divQuan[i] = 0;
    }
    for (int a = 0; a < t; a++) {
        int i = 2;
        while (x[a] > 1) {
            int quantity = 0;
            while (x[a] % i == 0) {
                if (isprime(i)) {
                    divisors[i] = i;
                    quantity++;
                    x[a] /= i;
                }
            }
            if (quantity > divQuan[i]) {
                divQuan[i] = quantity;
            }
            i++;
        }
    }
    int lcm = 1;
    for (int i = 0; i < larger; i++) {
        lcm *= pow(divisors[i], divQuan[i]);
    }

    cout << "LCM is " << lcm;
}