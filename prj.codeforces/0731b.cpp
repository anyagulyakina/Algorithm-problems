// wrong answer test 20;

#include <iostream>
#include <vector>
#include <string>

int main() {
	int n,a;
	std::cin >> n;
	std::vector<int> inp;
	std::string rez = "YES";
	int col = 0;
	for (int k = 0; k < n; k++) {
		std::cin >> a;
		inp.push_back(a);
		if (a % 2 == 1) {
			col++;
		}
	}
	int j = 0;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (col % 2 == 1) {
			rez = "NO";
			break;
		}
		else {
			if (inp[i] % 2 == 1) {
				if (inp[i+1] % 2 != 1) {
					sum = 0;
					j = i + 1;
					while (j < n && inp[j] % 2 != 1) {
						if (inp[j]==0) {
							rez = "NO";
							break;
						}
						sum += inp[j];
						j++;
					}
					if (sum < 2) {
						rez = "NO";
						break;
					}
					i = j + 1;
				}
				else {
					i = i + 1;
				}
			}
		}
	}
	std::cout << rez;
}