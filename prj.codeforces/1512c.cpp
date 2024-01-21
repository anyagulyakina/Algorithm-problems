// да, костыль. зато работает!!!

#include <iostream>;
#include <string>;
#include <vector>;


int main() {
    int t;
    int a, b;
    std::string s;
    std::cin >> t;
    std::vector<std::string> mass(t);


    for (int i = 0; i < t; i++) {
        int bin = 0;
        mass[i] = "-1";
        std::cin >> a >> b >> s;
        int len = s.size();
        for (int n = 0; n < len; n++) {
            if (s[n] == '0' && a >= 1) {
                if (s[len - n - 1] == '0') {
                    a = a - 1;
                }
                if (s[len - n - 1] == '1') {
                    bin = 1;
                    break;

                }
                if (s[len - n - 1] == '?') {
                    a = a - 1;
                }
            }
            else {
                if (s[n] == '1' && b >= 1) {
                    if (s[len - n - 1] == '0') {
                        bin = 1;
                        break;

                    }
                    if (s[len - n - 1] == '1') {
                        b = b - 1;
                    }
                    if (s[len - n - 1] == '?') {
                        s[len - n - 1] = '1';

                        b = b - 1;
                    }
                }
                else {
                    if (s[n] == '?') {
                        if (s[len - n - 1] == '0' && a >= 1) {
                            s[n] = '0';
                            a = a - 1;
                        }
                        if (s[len - n - 1] == '1' && b >= 1) {
                            s[n] = '1';
                            b = b - 1;
                        }
                    }
                    else {
                        bin = 1;
                        break;
                    }
                }
            }
        }
        

        if (len % 2 == 1) {
            if (a % 2 == 1) {
                s[len / 2] = '0';
                a = a - 1;
            }
            if (b % 2 == 1) {
                s[len / 2] = '1';
                b = b - 1;
            }
        }
        for (int n = 0; n < len/2; n++) {
            if (s[n] == '?') {
                if (a>=2) {
                    s[n] = '0';
                    s[len - n - 1] = '0';
                    a = a - 2;
                }
                else {
                    if (b >= 2) {
                        s[n] = '1';
                        s[len - n - 1] = '1';
                        b = b - 2;
                    }
                    else {
                        bin = 1;
                        break;
                    }
                }
            }
        }
        if (bin == 0) {
            for (int j = 0; j < s.size(); j++) {
                if (s[j] == '0' || s[j] == '1') {
                    mass[i] = s;
                }
                else {
                    mass[i] = "-1";
                    break;
                }
            }
        }
    }

    //std::cout << '\n';
    for (int i = 0; i < t; i++) {
        std::cout << mass[i] << '\n';
    }
}
