#include <iostream>
using namespace std;
int main() {

    int rows = 8;
    int i = 0;

    // outer loop
    while (i < rows) {

        // inner loop for spaces
        int j = 0;
        while (j < i) {
            cout << "  ";
            j++;
        }

        // inner loop for printing hashes
        int h = 0;
        while (h < rows - i) {
            cout << "# ";
            h++;
        }
        cout << endl;
        i++;
    }

    return 0;
}