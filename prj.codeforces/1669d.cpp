#include <iostream>
#include <string>
#include <vector>

int main() {
	int t;
	std::cin >> t;
	std::vector<std::string> mass(t);
	for (int i = 0; i < t; i++) {
		int n;
		std::string str;
		std::cin >> n >> str;
		int r = 0;
		int b = 0;
		for (int j = 0; j < n; j++) {
			//std::cout << r << ' ' << b << '\n';
			if (str[j] == 'W') {
				if (r+b>0 && (b == 0 || r == 0)) {
					break;
				}
				r = 0;
				b = 0;
			}
			else {
				if (str[j] == 'B') {
					b++;
				}
				else {
					if (str[j] == 'R') {
						r = r + 1;
					}
				}
			}
		}
		if (r + b > 0 && (b == 0 || r == 0)) {
			mass[i] = "NO";
		}
		else {
			mass[i] = "YES";
		}
	}
	for (int i = 0; i < t; i++) {
		std::cout << mass[i] << '\n';
	}
	return 0;
}