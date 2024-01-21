#include <vector>
#include <iostream>
 
using namespace std;
 
int main() {
	int count;
	cin >> count;
	vector<int> mass(count);
	for (int i=0; i < count; i++) {
		cin >> mass[i];
	}
	vector<int> rez;
	for (int n = count - 1; n >= 0; n--) {
		if (find(rez.begin(), rez.end(), mass[n]) == rez.end()) {
			rez.insert(rez.begin(), mass[n]);
		}
	}
	cout << rez.size() << "\n";
	for (int i = 0; i < rez.size(); i++) {
		cout << rez[i] << " ";
	}
	return 0;
}
