#include <iostream>
using namespace std;

int main() 
{
	int rows = 7;
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < i; j++) {
		cout<<" ";
    }
    for (int c = 0; c < rows - i; c++) {
		if (i % 2 == 0) {
			cout << (c % 2 == 0 ? "@" : "#");
		} else {
			cout<<(c % 2 == 0 ? "#" : "$");
      }
    }
		cout<<endl;
  }
	return 0;
}