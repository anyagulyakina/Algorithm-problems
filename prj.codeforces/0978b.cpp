#include <iostream>
#include <string>
 
 
int main() {
	int n;
	int counter = 0;
	int rez = 0;
	std::string s;
	std::cin >> n;
	std::cin >> s;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'x') {
			counter++;
			if (counter == 3) {
				rez++;
				counter--;
			}
		}
		else {
			counter = 0;
		}
	}
	std::cout << rez;
}
