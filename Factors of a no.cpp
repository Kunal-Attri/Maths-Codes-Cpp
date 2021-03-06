#include <iostream>
#include "Basic_Functions.h"

using namespace std;

int main() {
    while (true) {
        int num = get_integer("Number: ");
        int total = 0;
        cout << "Factors: " << endl;
        if (isodd(num)) {
            for (int i = 1; i < num + 1; i += 2) {
                if (num % i == 0) {
                    cout << i << endl;
                    total++;
                }
            }
        }
        else {
            for (int i = 1; i < num + 1; i++) {
                if (num % i == 0) {
                    cout << i << endl;
                    total++;
                }
            }
        }
        cout << "Total = " << total << endl << endl;
    }
}