// не дорешала (превышено ограничение времени на тесте 4)

#include <iostream>
#include <vector>
#include <string>
 
int main() {
	long int t, l, r;
	std::cin >> t;
	std::vector<std::string> mass;
	mass.resize(t);
	for (int i = 0; i < t; i++) {
		std::cin >> l >> r;
		if (r <= 3) {
			mass[i] = "-1";
		}
		else {
			if (l != r && r > 3) {
				if (r % 2 == 0) {
					int a = r - 2;
					std::string str = "2 " + std::to_string(a);
					mass[i] = str;
				}
				else {
					int a = r - 3;
					std::string str = "2 " + std::to_string(a);
					mass[i] = str;
				}
			}
			else {
				if (r % 2 == 0) {
					int a = r / 2;
					std::string str = std::to_string(a) + ' ' + std::to_string(a);
					mass[i] = str;
				}
				else {
					int k = ((r - 1) / 2);
					mass[i] = "-1";
					for (int j = 2; j <= k; j++) {
						int a = j;
						int b = r - j;
						std::string str = std::to_string(a) + ' ' + std::to_string(b);
						if (b % a == 0) {
							mass[i] = str;
						}
					}
 
				}
			}
		}
	}
	for (int i = 0; i < t; i++) {
		std::cout << mass[i]<<'\n';
	}
}
