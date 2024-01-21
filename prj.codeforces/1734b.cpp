#include <iostream>
#include <vector>
#include <string>

int main() {
	int t;
	std::cin >> t;
	std::vector<std::string> mass;
	for (int i = 0; i < t;i++) {
		int n;
		std::cin >> n;
		for (int j = 1; j <= n; j++) {
			std::string s;
			for (int k = 0; k < (2 * j - 1); k++) {
				if (k == 0 || k == 2 * j - 2) {
					s = s + "1";
				}
				else {
					if (k % 2 == 1) {
						s = s + " ";
					}
					else {
						s = s + "0";
					}
				}
			}
			mass.push_back(s);
		}
	}
	for (int i = 0; i < mass.size(); i++) {
		std::cout << mass[i] <<'\n';
	}
}
