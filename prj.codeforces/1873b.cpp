#include <iostream>
#include <vector>

int main() {
	int t;
	std::cin >> t;
	std::vector<int> result;
	for (int i = 0; i < t; i++) {
		int n;
		int rez = 1;
		std::cin >> n;
		std::vector<int> mass;
		int min = 9;
		int ind = 0;
		for (int j = 0; j < n; j++) {
			int a;
			std::cin >> a;
			mass.push_back(a);
			if (a < min) {
				min = a;
				ind = j;
			}
		}
		for (int j = 0; j < n; j++) {
			if (ind == j) {
				mass[j]++;
			}
			rez = rez * mass[j];
		}
		result.push_back(rez);
	}
	for (int i = 0; i < t; i++) {
		std::cout << result[i]<<'\n';
	}
}