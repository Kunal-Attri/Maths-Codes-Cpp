#include <iostream>

using namespace std;

int main() {
    int fibonacci(int);
    int a;
    cout << "Which fibonacci number: ";
    cin >> a;
    cout << fibonacci(a) << endl;
}

int fibonacci(int num) {
    if (num <= 1) {
        return 0;
    }
    if (num == 2) {
        return 1;
    }
    return fibonacci(num-1) + fibonacci(num-2);
}