#include <iostream>
using namespace std;
int main() {

    int rows = 5;
    int i = 0;

    // outer loop
    while (i < rows) {
        // add space for s
        if (i % 2 != 0) {
            cout << " ";
        }
        // inner loop
        int j = 0;
        while (j < 10) {
            cout << "^ ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}