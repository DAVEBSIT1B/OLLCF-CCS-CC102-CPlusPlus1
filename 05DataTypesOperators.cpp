#include <iostream>

#include <cmath>

using namespace std;

double calculateDistance(double x1, double y1, double x2, double y2) 
{
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

int main() 
{
    double x1, y1, x2, y2;

    cout << "Enter the x- coordinates of the first point: ";
    cin >> x1; 
    cout << "Enter the y- coordinates of the first point: ";
    cin >> y1;
    
    cout << "Enter the x- coordinates of the second point: ";
    cin >> x2;
    cout << "Enter the y- coordinates of the second point: ";
    cin >> y2;

    double distance = calculateDistance(x1, y1, x2, y2);

    cout << "The distance between the points is: " << distance << std::endl;

    return 0;
}
