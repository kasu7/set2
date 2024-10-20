#include <iostream>

using namespace std;

int maxSubArray(int nums[], int size) {
    int max_sum = -2147483648; 
    int current_sum = 0;

    for (int i = 0; i < size; ++i) {
        current_sum += nums[i];

        if (max_sum < current_sum) {
            max_sum = current_sum;
        }

        if (current_sum < 0) {
            current_sum = 0;
        }
    }

    return max_sum;
}

int main() {
    int nums[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size = sizeof(nums) / sizeof(nums[0]);

    int max_sum = maxSubArray(nums, size);
    cout << "Maximum subarray sum is " << max_sum << endl;

    return 0;
}

