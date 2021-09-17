#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        for (int k = 0; k < 5 - i; k++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < 5; i++) {
        for (int k = 0; k < 5 - i; k++) {
            cout << " ";
        }
        for (int m = 0; m <= i; m++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << "add";
    cout << "add 02";

    return 0;
}