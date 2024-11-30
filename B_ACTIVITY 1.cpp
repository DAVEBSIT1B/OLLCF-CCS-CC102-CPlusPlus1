#include <iostream>
using namespace std;
int main() {

    int height = 8;
    int i = height;

    // outer loop
    while (i > 0) {

        // inner loop
        int j = 0;
        while (j < i) {
            cout << "# ";
            j++;
        }
        cout << endl;
        i--;
    }

    return 0;
}