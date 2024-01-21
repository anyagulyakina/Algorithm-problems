#include <vector>
#include <iostream>
#include <string>
 
 
int main() {
	std::vector<std::string> mass;
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::string s;
		std::cin >> s;
		std::string rez;
		int len = s.size();
		if (len > 10) {
			std::string str = std::to_string(len - 2);
			rez = s[0] + str + s[len - 1];
		}
		else {
			rez = s;
		}
		mass.push_back(rez);
	}
	for (int i = 0; i < n; i++) {
		std::cout << mass[i]<<"\n";
	}
	
 
	return 0;
}
