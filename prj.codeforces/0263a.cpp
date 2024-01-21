#include <iostream>
#include <math.h>

int main() {
	int k, l;
	for (int i = 1; i < 6; i++) {
		for (int j = 1; j < 6; j++) {
			int a;
			std::cin >> a;
			if (a == 1) {
				k = i;
				l = j;
			}
		}
	}
	int rez = abs(3 - k) + abs(3 - l);
	std::cout << rez;
}
