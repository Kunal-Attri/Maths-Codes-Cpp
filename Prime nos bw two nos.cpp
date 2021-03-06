#include <iostream>
#include "Basic_Functions.h"

using namespace std;

int main() {
    while (true) {
        int ini_no = get_integer("Initial no: ");
        int final_no = get_integer("Final no: ");

        int total = 0;
        cout << "Prime no.s in range from " << ini_no << " to " << final_no << " are: \n";
        for (int i = ini_no; i <= final_no; i++) {
            if (isprime(i) and i != 1) {
                cout << i << endl;
                total++;
            }
        }
        if (total == 0) {
            cout << "None\n";
        }
        else {
            cout << "Total = " << total << endl;
        }
        cout << endl;
    }
}