#include <iostream>
#include <vector>

int main() {
	std::vector<int> mass;
	int n, k, ud;
	int max = -1000000000;
	std::cin >> n >> k;
	for (int i = 0; i < n; i++) {
		int f, t;
		std::cin >> f >> t;
		if (t > k) {
			ud = f - (t - k);
		}
		else {
			ud = f;
		}
		mass.push_back(ud);
	}
	for (int i = 0; i < n; i++) {
		if (max < mass[i]) {
			max = mass[i];
		}
	}
	std::cout << max;
}
