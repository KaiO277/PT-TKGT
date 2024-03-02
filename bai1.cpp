#include <iostream>
#include <vector>

using namespace std;

void giveChange(int totalAmount) {
    vector<int> coins = {5, 2, 1}; 
    vector<int> result(coins.size(), 0); 

    for (int i = 0; i < coins.size(); ++i) {
        while (totalAmount >= coins[i]) {
            totalAmount -= coins[i];
            result[i]++;
        }
    }

    cout << "So luong dong tien can tra it nhat:\n";
    for (int i = 0; i < coins.size(); ++i) {
        if (result[i] > 0) {
            cout << "Mệnh giá " << coins[i] << "$: " << result[i] << " dong\n";
        }
    }
}

int main() {
    int totalAmount = 28; 

    giveChange(totalAmount);

    return 0;
}
