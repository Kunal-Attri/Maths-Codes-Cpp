#include <iostream>
#include "Basic_Functions.h"

using namespace std;

int main() {
    while (true) {
        int ini_no = get_integer("No. to be checked for prime: ");
        if (isprime(ini_no)) {
            cout << ini_no << " is a prime no.\n\n";
        }
        else {
            cout << ini_no << " is not a prime no.\n\n";
        }
    }
}