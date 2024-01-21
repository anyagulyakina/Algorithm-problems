#include <iostream>
#include <string>
#include <vector>

int main() {
	int t;
	std::cin >> t;
	std::vector<int> mass;
	for (int i = 0; i < t; i++) {
		int n, k;
		std::cin >> n >> k;
		
		std::string str;
		std::cin >> str;
		std::string str1 = str.substr(0, k);
		int count = std::count(str1.cbegin(), str1.cend(), 'W');
		int min = count;
		for (int j = k; j < n; j++) {
			if (str[j] == 'W') {
				++count;
			}
			if (str[j - k] == 'W') {
				--count;
			}
			if (count < min) {
				min = count;
			}
		}
		mass.push_back(min);
	}
	for (int i = 0; i < t; i++) {
		std::cout << mass[i] << '\n';
	}
}