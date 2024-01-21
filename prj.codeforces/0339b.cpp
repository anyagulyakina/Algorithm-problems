#include <iostream>


int main() {
    int n, m;
    long long a;
    long long a_last = 1;
    long long count = 0;
    std::cin >> n >> m;
    for (int i = 0; i < m; i++) {
        std::cin >> a;
        if (a_last <= a) {
            count += a - a_last;
        }
        else {
            count += n - a_last + 1;
            count += a - 1;
        }
        a_last = a;
    }
    std::cout << count;

    return 0;
}
