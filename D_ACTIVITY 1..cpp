#include <iostream>
using namespace std;
int main() {

    int rows = 8;
    int i = 1;

    // outer loop
    while (i <= rows) {

        // inner loop
        int j = i;
        while (j >= 1) {
            cout << j << " ";
            j--;
        }
        cout << endl;
        i++;
    }

    return 0;
}