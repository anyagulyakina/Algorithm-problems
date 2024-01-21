//не дорешала (превышено ограничение времени на тесте 9)

#include<iostream>
#include<vector>
int main() {
    int n, m, house;
    long int room, actRoom;
    std::cin >> n >> m;
    std::vector<long int> a;
    long int num;
    for (int i = 0; i < n; i++) {
        std::cin >> num;
        a.push_back(num);
    }
    
    for (int i = 1; i <= m; i++) {
        house = 1;
        std::cin >> room;
        for (int j = 0; j < n; j++) {
            if (room - a[j] > 0) {
                ++house;
                room = room - a[j];
            }
            else {
                actRoom = room;
                break;
            }
        }
        std::cout << house << " " << actRoom << "\n";
    } 
    return 0;
}
