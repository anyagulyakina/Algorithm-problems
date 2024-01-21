#include <iostream>
#include <vector>

int main() {
	int t, n, m, x, y, d;
	int rez = -1;
	std::vector<int> mass;
	std::cin >> t;
	for (int i = 0; i < t; i++) {
		std::cin >> n >> m >> x >> y >> d;
		if (((x - d > 1) && (y + d < m)) || ((x+d<n) && (y-d>1))) {
			rez = n + m - 2;
		}
		else {
			rez = -1;
		}
		mass.push_back(rez);
	}
	for (int i = 0; i < t; i++) {
		std::cout << mass[i] << "\n";
	}
}
