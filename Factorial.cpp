#include <iostream>
#include <math.h>
#include "Basic_Functions.h"

using namespace std;

int main() {
    while (true) {
        int fact = get_integer("Factorial of: ");
        fact = factorial(fact);
        cout << "Factorial: " << fact << endl << endl;
    }
}