#include <iostream>
using namespace std;

class A {
    private:
    int a;
    int assign() {
        a = 123;
        return 0;
    }
    public:
    int disp() {
        assign();
        return 0;
    }
};

int main() {
    A a1;
    a1.disp();
}