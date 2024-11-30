#include <iostream>
using namespace std;
int main() {

    int rows = 8;

    // outer loop
    for (int i = 0; i < rows; i++) {

        // inner loop
        for (int j = 0; j < 4; j++) {
            cout << " # *";
        }
        cout << endl;
    }

    return 0;
}