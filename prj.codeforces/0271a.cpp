#include <iostream>

int main() {
	int g;
	std::cin >> g;
	for (int i = g + 1; i < 9999; i++) {
		int d = i % 10;
		int c = (i % 100 - d) / 10;
		int b = (i % 1000 - i % 100) / 100;
		int a = (i - i % 1000) / 1000;
		//std::cout << a << ' ' << b << ' ' << c << ' ' << d;
		if (a!=b && a!=c && a!=d && b!=c && b!=d && c!=d) {
			std::cout << i;
			break;
		}
	}
}
