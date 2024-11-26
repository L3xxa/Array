#include <iostream>
using namespace std;

int main() {
    int profit;
    int sum_profit [6];

    for (int i = 0; i < 6; i++) {
        cout << "Enter the profit for the month: ";
        cin >> profit;
        sum_profit[i] = profit;
    }

    cout << "Income for 6 months ="
    << sum_profit[0] + sum_profit[1]
    + sum_profit[2] + sum_profit[3]
    + sum_profit[4] + sum_profit[5] << endl;

    return 0;
}