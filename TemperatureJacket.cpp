#include <iostream>

using namespace std;

int main() {
    double temperature;
    
    cout << "Enter the temperature in degrees: ";
    cin >> temperature;
    
    if (temperature < 32) {
        cout << "It's colder than 32 degrees. Bring a heavy jacket." << endl;
    } else if (temperature <= 50) {
        cout << "The temperature is between 32 and 50 degrees. Bring a light jacket." << endl;
    } else {
        cout << "It's warmer than 50 degrees. No jacket needed." << endl;
    }

    return 0;
}