#include <iostream>
#include <vector>

int main() {
	int t;
	std::cin >> t;
	std::vector<int> mass;
	for (int i = 0; i < t; i++) {
		int n;
		int bin = 0;
		int dl = 0;
		std::cin >> n;
		std::vector<int> tmp;
		for (int j = 0; j < n; j++) {
			int a;
			std::cin >> a;
			tmp.push_back(a);
			if (a == 0) {
				bin = 1;
			}
		}
		if (bin == 1) {
			int count = 0;
			int j = 0;
			while (tmp[j] != 0) {
				count++;
				++j;
			}
			j = n - 1;
			while (tmp[j] != 0) {
				count++;
				--j;
			}
			dl = n - count + 1;
		}
		mass.push_back(dl);
	}
	for (int i = 0; i < t; i++) {
		std::cout << mass[i] << '\n';
	}
	return 0;
}