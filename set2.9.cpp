#include <iostream>

using namespace std;

void findMaxLengthSubarray(int nums[], int n, int target) {
    int maxLength = 0;
    int start = 0, end = 0;

    for (int i = 0; i < n; ++i) {
        int sum = 0;
        for (int j = i; j < n; ++j) {
            sum += nums[j];
            if (sum == target) {
                if (j - i + 1 > maxLength) {
                    maxLength = j - i + 1;
                    start = i;
                    end = j;
                }
            }
        }
    }

    if (maxLength == 0) {
        cout << "No subarray with given sum" << endl;
    } else {
        cout << "Maximum length subarray with given sum: { ";
        for (int i = start; i <= end; ++i) {
            cout << nums[i] << " ";
        }
        cout << "}, length: " << maxLength << endl;
    }
}

int main() {
    int nums[] = {5, 6, -5, 5, 3, 5, 3, -2, 0};
    int n = sizeof(nums) / sizeof(nums[0]);
    int target = 8;

    findMaxLengthSubarray(nums, n, target);

    return 0;
}

