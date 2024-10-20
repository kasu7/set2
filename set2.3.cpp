#include <iostream>

using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void minHeapify(int arr[], int n, int i) {
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] < arr[smallest])
        smallest = left;

    if (right < n && arr[right] < arr[smallest])
        smallest = right;

    if (smallest != i) {
        swap(arr[i], arr[smallest]);
        minHeapify(arr, n, smallest);
    }
}

int findKthLargest(int nums[], int n, int k) {
    int heap[k];

    for (int i = 0; i < k; ++i) {
        heap[i] = nums[i];
    }

    for (int i = k / 2 - 1; i >= 0; --i) {
        minHeapify(heap, k, i);
    }

    for (int i = k; i < n; ++i) {
        if (nums[i] > heap[0]) {
            heap[0] = nums[i];
            minHeapify(heap, k, 0);
        }
    }

    return heap[0];
}

int main() {
    int nums[] = {3, 2, 1, 5, 6, 4};
    int size = sizeof(nums) / sizeof(nums[0]);
    int k = 2;

    int kthLargest = findKthLargest(nums, size, k);
    cout << "The " << k << "th largest element is " << kthLargest << endl;

    return 0;
}

