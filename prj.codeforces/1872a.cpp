#include <iostream>
#include <cmath>
#include <vector>
 
int main() {
	using namespace std;
 
	int count = 0;
	cin >> count;
	vector<float> mass; //создаем массив
//	mass.resize(count); //задаем размер массиву
	for (int i = 0; i < count; i++) {
		float a;
		float b;
		float c;
		cin >> a >> b >> c;
		float dif = abs(a - b) / 2.0;
		float rez = dif / c;
		//		cout << rez;
		if (floor(rez) != rez) {
			rez = floor(rez) + 1;
		}
		mass.push_back(rez);
	}
//	for (int j = 0; j < count; j++) {
//		cout << mass[j] << endl;
//	}
	for (float n : mass) {
		cout << n << "\n";
	}
	return 0;
}
