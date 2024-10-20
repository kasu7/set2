#include <iostream>

using namespace std;

int countInversions(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] > arr[j]) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int arr[] = {7, 2, 6, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    int inversions = countInversions(arr, size);
    cout << "Number of inversions: " << inversions << endl;

    return 0;
}

