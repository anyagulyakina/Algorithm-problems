#include <iostream>;
#include <string>;
#include <vector>;

int main() {
    int t;
    std::cin >> t;
    std::string str;
    std::vector<std::string> mass;
    for (int i = 0; i < t; i++) {
        int n, k, r, c;
        std::cin >> n >> k >> r >> c;
        for (int o = 0; o < n; o++) {
            str = "";
            for (int p = 1; p < n + 1; p++) {
                if ((c - r + 1 + n*k + o) % k == p % k) {
                    str += "X";
                    //std::cout << 'X';
                }
                else {
                    str += ".";
                    //std::cout << '.';
                }
            }
            mass.push_back(str);
        }
    }
    for (int k = 0; k < mass.size(); k++) {
        std::cout << mass[k] << '\n';
    }
}
