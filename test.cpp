#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// Hàm để tìm tổng nhỏ nhất của hai số từ mảng A[]
int findMinSum(vector<int>& A, int N) {
    // Sắp xếp mảng để các số nhỏ nhất được sử dụng trước
    sort(A.begin(), A.end());

    int sum = 0;

    // Tạo số thứ nhất bằng cách ghép các số từ đầu mảng
    for (int i = 0; i < N - 1; i += 2) {
        int num = A[i] * 10 + A[i + 1];
        sum += num;
    }

    return sum;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        int result = findMinSum(A, N);
        cout << result << endl;
    }

    return 0;
}
