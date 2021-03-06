#include <iostream>
using namespace std;

int main() {
    cout << "Enter your choice: ";
    int ch;
    cin >> ch;
    switch(ch) {
        case 1:
            cout << "Case 1";
            break;
        case 2:
            cout << "Case 2";
            break;
        default:
            cout << "Please enter valid choice";
            break;
    }
    cout << endl;
}