#include <iostream>
using namespace std;

int main() {
    int age;
    double money;
    bool parent;
    string toPrintShow, toPrintMoney;
	cout << "Enter age: "; 
    cin >> age;

    if (age < 13) {
        cout << "With parent? (1 If Yes, 0 If No): ";
        cin >> parent;
        toPrintShow = parent ? "PG & G Show." : "G Show.";
    } else if (age < 16) {
    } else {
        toPrintShow = "R, PG & G Show.";}
	cout << "Enter money: ";
    cin >> money;
	toPrintMoney = money < 7.5 ? "Not enough money." : "Can go to evening & matinee show.";
	cout << toPrintShow << endl;
    cout << toPrintMoney << endl;
	return 0;
}