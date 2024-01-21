#include <iostream>;
#include <string>;
#include <vector>;
#include <algorithm>;

int main() {
    int t;
    int n, k;
    std::string s;
    std::cin >> t;
    std::vector<char> mass;
    std::vector<std::string> rez(t);
    for (int i = 0; i < t; i++) {
        int one = 0;
        int null = 0;
        rez[i] = "YES";
        mass.clear();
        std::cin >> n >> k >> s;
        for (int l = 0; l < k; l++) {
            mass.push_back(s[l]);
        }
        for (int j = k; j < n; j++) {
            if (mass[j % k] == '?') {
                mass[j % k] = s[j];
            }
            if (s[j] != mass[j % k] && s[j]!= '?') {
                rez[i] = "NO";
                break;
            }
        }
        for (int f = 0; f < k; f++) {
            if (mass[f] == '1') {
                one++;
            }
            if (mass[f] == '0') {
                null++;
            }
        }
        if (one>(k/2) || null>(k/2)) {
            rez[i] = "NO";
        }
    }
    for (int i = 0; i < t; i++) {
        std::cout << rez[i] << '\n';
    }
}
