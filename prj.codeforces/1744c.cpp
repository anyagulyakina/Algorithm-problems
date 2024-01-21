#include <iostream>
#include <vector>
#include <string>

int main() {
	int t;
	std::cin >> t;
	std::vector<int> mass(t);
	for (int i = 0; i < t; i++) {
		int n,k,count;
		char c;
		int max = 0;
		std::string s;
		std::cin >> n >> c >> s;
		s = s + s;
		for (int j = 0; j < n; j++) {
			if (s[j] == c) {
				k = j + 1;
				count = 0;
				while (s[k] != 'g' && k < n * 2) {
					count++;
					if (max < count) {
						max = count;
					}
					k++;
				}
				j = k;
			}
		}
		mass[i]=max+1;
		if (c == 'g') {
			mass[i] = 0;
		}
	}
	for (int i = 0; i < t; i++) {
		std::cout << mass[i]<<'\n';
	}

	return 0;
}