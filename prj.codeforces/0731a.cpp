#include <iostream>
#include <string>
#include <algorithm>

int main() {
	std::string str;
	std::cin >> str;
	int ind = 'a';
	int sum = 0;
	for (int i = 0; i < str.size(); i++) {
		int ind2 = str[i];
		
		if (abs(ind2 - ind) < abs(26 - (abs(ind2 - ind)))) {
			sum += abs(ind2 - ind);
		}
		else {
			sum += 26 - (abs(ind2 - ind));
		}
		ind = ind2;
	}
	std::cout << sum;

	return 0;
}