#include <iostream>
#include <vector>
#include <string>

int main() {
	int t;
	std::cin >> t;
	std::vector<std::string> rez;
	for (int i = 0; i < t; i++) {
		int a1 = 0;
		int a2 = 0;
		int b1 = 0;
		int b2 = 0;
		std::vector<std::string> mass;
		int n;
		std::cin >> n;
		for (int i = 0; i < n;i++) {
			std::string a;
			std::cin >> a;
			mass.push_back(a);
		}
		int bin = 0;
		for (int i = 0; i < n; i++) {
			//std::cout << i << std::endl;
			for (int j = 0; j < n; j++) {
				if (mass[i][j] == '*') {
					a1 = i;
					b1 = j;
					bin = 1;
					break;
				}
			}
			if (bin == 1) {
				break;
			}
		}
		//std::cout << '\n';
		for (int i = 0; i < n; i++) {
			//std::cout << i << std::endl;
			for (int j = 0; j < n; j++) {
				if (mass[i][j] == '*') {
					a2 = i;
					b2 = j;
				}
			}
		}
		//std::cout << a1 << ' ' << b1 << ' ' << a2 << ' ' << b2 << std::endl;
		if (a1!=a2 && b1!=b2) {
			mass[a1][b2] = '*';
			mass[a2][b1] = '*';
		}
		else {
			if (a1 == a2) {
				if (a1 != n - 1) {
					mass[a1+1][b2] = '*';
					mass[a1+1][b1] = '*';
				}
				else {
					mass[a1-1][b2] = '*';
					mass[a1-1][b1] = '*';
				}
			}
			else {
				if (b1 != n - 1) {
					mass[a1][b1+1] = '*';
					mass[a2][b1+1] = '*';
				}
				else {
					mass[a1][b1-1] = '*';
					mass[a2][b1-1] = '*';
				}
			}
		}
		for (int i = 0; i < n; i++) {
			rez.push_back(mass[i]);
		}
	}
	for (int i = 0; i < rez.size(); i++) {
		std::cout << rez[i] << std::endl;
	}
	return 0;
}
