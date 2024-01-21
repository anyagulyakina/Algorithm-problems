#include <iostream>
#include <string>
#include <vector>
 
int main(){
	int t;
	int counter = 0;
	std::vector<int> mass;
	std::cin >> t; 
	std::string a1 = "1111111111";
	std::string a2 = "1222222221";
	std::string a3 = "1233333321";
	std::string a4 = "1234444321";
	std::string a5 = "1234554321";
	std::string a = a1 + a2 + a3 + a4 + a5 + a5 + a4 + a3 +  a2 + a1;
	for (int i = 0; i < t; i++) {
		for (int k = 1; k < 11; k++) {
			std::string str;
			std::cin >> str;
			for (int l = 1; l < 11; l++) {
				if (str[l-1] == 'X') {
					int ind = 10 * (k - 1) + l - 1;
					int sl = a[ind] - '0';
					counter = counter + sl;
				}
			}
		}
		mass.push_back(counter);
		counter = 0;
	}
	for (int i = 0; i < t; i++) {
		std::cout << mass[i] << "\n";
	}
}
