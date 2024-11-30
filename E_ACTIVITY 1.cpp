#include <iostream>
using namespace std;
int main() {

    int rows = 8;
    int i = 1;

    // outer loop
    while (i <= rows) {

        // inner loop for spaces
        int j = 1;
        while (j <= rows - i) {
            cout << "  ";
            j++;
        }

        // inner loop for numbers
        int k = 1;
        while (k <= i) {
            cout << k << " ";
            k++;
        }
        cout << endl;
        i++;
    }

    return 0;
}