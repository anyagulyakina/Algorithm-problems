#include <iostream>
 
int main() {
	int x;
	std::cin >> x;
	int rez = 0;
	if (x%5!=0) {
		rez = x / 5 + 1;
	}
	else {
		rez = x / 5;
	}
	std::cout << rez;
}
