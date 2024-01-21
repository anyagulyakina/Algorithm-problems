#include <iostream>
#include <cstring>
#include <string>
#include <vector>

int main() {
	int t, n, k;
	std::cin >> t;
	std::string s;
	std::vector<int> rez;

	for (int i = 0; i < t; i++) {
		std::vector<int> alph(256);
		int counter = 0;
		int max = 0;
		int a = 0;
		int el = 0;
		std::cin >> n >> s >> k;
		for (int i = 0; i < k; i++) {
			char sp;
			std::cin >> sp;
			alph[sp] = 1; //обозначили во вспомогательном массиве единичками специальные числа
		}
		int ind = n - 1;
		for (int j = n - 1; j >= 0; j--) {
			if (alph[s[j]] == 1) {
				ind = j;
				break;
			}
		}
		std::string s2 = s.substr(0, ind+1);
		int n_new = ind+1;

		for (int i = 0; i < n_new; i++) {
			
			if (alph[s2[i]] != 1) {
				counter++;
				if (counter >= max) {
					max = counter;
					el = a;
				}
			}
			else {
				a++;
				counter = 0;
			}
			//std::cout << counter << ' '<<max << ' ' << a << ' '<<el<< "\n";
		}
		if (el > 0 || (max==0 && s2.size()>1)) {
			max++;
		}
		if (max==n) {
			max = 0;
		}
		rez.push_back(max);
	}
	for (int j = 0; j < t; j++) {
		std::cout << rez[j] << "\n";
	}

	return 0;
}
