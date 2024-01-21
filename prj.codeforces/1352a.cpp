#include <iostream>
#include <vector>
#include <string>
#include <cmath>

int main() {
	int t,k;
	std::vector<int> mass;
	std::cin >> t;
	for (int i = 0; i < t; i++) {
		std::cin >> k;
		mass.push_back(k);
	}
	for (int i = 0; i < t; i++) {
		int p = mass[i];
		std::string a = std::to_string(p);
		int len = a.size();
		int count = 0;
		for (int j = 0; j < len; j++) {
			if (a[j] != '0') {
				count += 1;
			}
		}
		std::cout << count << "\n";
		for (int j = 0; j < len; j++) {
			if (a[j] != '0') {
				int f = int(a[j]-'0');
				f = f * (pow(10, len - j - 1));
				std::cout << f << ' ';
			}
		}
		std::cout << "\n";
	}

}
