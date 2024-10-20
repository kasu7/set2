#include <iostream>

using namespace std;

int findEquilibriumIndex(int arr[], int n) {
    int totalSum = 0;
    for (int i = 0; i < n; ++i) {
        totalSum += arr[i];
    }

    int leftSum = 0;
    for (int i = 0; i < n; ++i) {
        totalSum -= arr[i];
        if (leftSum == totalSum) {
            return i + 1; 
        }
        leftSum += arr[i];
    }

    return -1; 
}

int main() {
    int arr1[] = {-7, 1, 5, 2, -4, 3, 0};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    cout << "Equilibrium index (1-based) is: " << findEquilibriumIndex(arr1, size1) << endl;

    int arr2[] = {1, 2, 3};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << "Equilibrium index (1-based) is: " << findEquilibriumIndex(arr2, size2) << endl;

    int arr3[] = {1, 3, 5, 2, 2};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    cout << "Equilibrium index (1-based) is: " << findEquilibriumIndex(arr3, size3) << endl;

    return 0;
}

