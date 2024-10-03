#include <iostream>
using namespace std;

int main()
{
    string nickname;
    int course;
    int school;

    cout << "Enter your Nickname: ";
    cin >> nickname; 

    cout << "Course-Year Level: ";
    cin >> course;

    cout << "Your School: ";
    cin >> school;

    cout << "Wow, Congrats " << nickname << "! " << courseYearLevel << " is a nice course. And you are studying in " << school << ", which is one of the Centers of Excellence in Tertiary Education." << endl;
    
    return 0;
}
