#include <iostream>
using namespace std;

int main ()
{

	cout<<"Revised Pattern 1 "<< endl;
	int n = 7;
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < i; ++j){
			cout << "  ";
  }
	for(int k=0; k<n-i;++k){
		if((i+k)%2==0){
			cout << " #";
		}
		else{
			cout<< " @";
		}
	}
	cout <<endl;
	}
	
	return 0;
}
