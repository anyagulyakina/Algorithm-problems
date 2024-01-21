#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
	int t;
	std::cin >> t;
	std::vector<int> rez;
	std::vector<int> mass;
	int n, x;
	for (int i = 0; i < t; i++) {
		std::cin >> n >> x;
		mass.clear();
		for (int y = 0; y < n; y++) {
			int f;
			std::cin >> f;
			mass.push_back(f);
		}
		for (int k = 1; k <= x + 1; k++) {
			if (std::find(mass.begin(), mass.end(), k) != mass.end()) {
				x++;
			}
		}
		rez.push_back(x);
	}
	for (int f = 0; f < t; f++) {
		std::cout << rez[f]<<"\n";
	}
}
