#include <iostream>
#include <vector>

int main() {
	int t;
	std::cin >> t;
	std::vector<int> mass;
	for (int i = 0; i < t;i++) {
		int n,a;
		std::cin >> n >> a;
		for (int j = 0; j < n-1; j++) {
			int k;
			std::cin >> k;
			a = a & k;
		}
		mass.push_back(a);
	}
	for (int i = 0; i < t; i++) {
		std::cout << mass[i]<<'\n';
	}
}
