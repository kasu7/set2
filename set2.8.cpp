#include <iostream>

using namespace std;

void maxSumOfKConsecutiveElements(int arr[], int n, int k) {
    if (n < k) {
        cout << "Invalid" << endl;
        return;
    }

    int max_sum = 0;
    for (int i = 0; i < k; ++i) {
        max_sum += arr[i];
    }

    int window_sum = max_sum;
    for (int i = k; i < n; ++i) {
        window_sum += arr[i] - arr[i - k];
        if (window_sum > max_sum) {
            max_sum = window_sum;
        }
    }

    cout << "Maximum sum of " << k << " consecutive elements: " << max_sum << endl;
}

int main() {
    int arr1[] = {100, 200, 300, 400};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int k1 = 2;
    maxSumOfKConsecutiveElements(arr1, n1, k1);

    int arr2[] = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int k2 = 4;
    maxSumOfKConsecutiveElements(arr2, n2, k2);

    int arr3[] = {2, 3};
    int n3 = sizeof(arr3) / sizeof(arr3
