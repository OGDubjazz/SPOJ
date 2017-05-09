#include <iostream>
using namespace std;
int main() {
    int i = 0;
    while ((cin>> i) > 0 && i != 42) {
        cout<< i << endl;
    }
    return 0;
}