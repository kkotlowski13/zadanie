#include<iostream>
using namespace std;

int silnia(int n) {
	if ( n == 0 ) {
		return 1;
	}
	else {
		return n * silnia(n - 1);
	}
}

int main() {
	int n;
	cin >> n;
	if ( n < 0 ) {
		cout << "Liczba jest mniejsza od zero." << endl;
		return(EXIT_FAILURE);
	} 
	else {
		cout << silnia(n) << endl; 
	
	}
	return 0;
}
