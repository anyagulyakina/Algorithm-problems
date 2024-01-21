#include <iostream>;
#include <string>;
#include <vector>;

int main() {
    int t, n, k;
    int count = 0;
    std::vector<int> mass;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        std::string a;
        std::cin >> n >> k;
        std::cin >> a;
        int count = 0;
        int j = 0;
        while (j < n) {
            //std::cout << j << '\n';
            if (a[j] == 'B') {
                count += 1;
                j += k;
            }
            else {
                ++j;
            }
        }
        mass.push_back(count);
    }
    for (int k = 0; k < t; k++) {
        std::cout << mass[k] << '\n';
    }
}
