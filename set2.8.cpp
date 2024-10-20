#include <iostream>

using namespace std;

int maxProfit(int prices[], int n) {
    int min_price = 1000000; 
    int max_profit = 0;

    for (int i = 0; i < n; ++i) {
        if (prices[i] < min_price) {
            min_price = prices[i];
        } else if (prices[i] - min_price > max_profit) {
            max_profit = prices[i] - min_price;
        }
    }

    return max_profit;
}

int main() {
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(prices[0]);

    int profit = maxProfit(prices, n);
    cout << "Maximum profit: " << profit << endl;

    return 0;
}

