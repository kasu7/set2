#include <iostream>

using namespace std;

bool findPairNaive(int arr[], int n, int X) {
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] + arr[j] == X) {
                cout << "Yes (Explanation: The pair (" << arr[i] << ", " << arr[j] << ") sums to " << X << ")" << endl;
                return true;
            }
        }
    }
    return false;
}

int main() {
    int arr[] = {1, 2, 4, 5, 7, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int X = 9;

    if (!findPairNaive(arr, n, X)) {
        cout << "No" << endl;
    }

    return 0;
}

