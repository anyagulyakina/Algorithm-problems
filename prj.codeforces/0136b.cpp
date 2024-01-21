#include <iostream>
#include <string>
#include <cmath>

long long to_tern(int k) {
	std::string s;
	int ost;
	while (k != 0) {
		ost = k % 3;
		k = k / 3;
		s = std::to_string(ost) + s;
	}
	k = std::stoi(s);

	return k;
}
long long to_dec(int k) {
	long long result = 0;
	for (int i = 0; k != 0; i++)
	{
		result += (k % 10) * pow(3, i);
		k /= 10;
	}

	return result;
}

int main() {
	long long a, c;
	std::cin >> a >> c;
	long long k = to_tern(a);
	a = to_tern(a);
	c = to_tern(c);
	std::string a_s = std::to_string(a);
	std::string c_s = std::to_string(c);
	std::string b_s;
	int count=0;
	while (a_s.size() < c_s.size()) {
		a_s = "0" + a_s;
	}
	while (a_s.size() > c_s.size()) {
		c_s = "0" + c_s;
	}
	// вычисление числа b;
	for (int i = c_s.size() - 1; i >= 0; i--) {
		count = ((c_s[i] - '0' + 3) - (a_s[i] - '0'))%3;
		std::string b_i = std::to_string(count);
		b_s = b_i + b_s;
	}
	long long b = std::stoi(b_s);
	long long rez = to_dec(b);

	std::cout << rez;

	return 0;
}