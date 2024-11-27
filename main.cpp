    #include <iostream>
    #include <limits>
    using namespace std;

int main() {
    int profit;
    constexpr int SIZE = 12;
    int ray[SIZE];

    for (int i = 0; i < SIZE; i++) {
        cout << "Enter the profit for month " << i + 1 << ": ";
        cin >> profit;

        while (cin.fail() || profit <= 0) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Enter positive profit for the month: ";
            cin >> profit;
        }
        ray[i] = profit;
    }

    int MAX = ray[0];
    int maxmonth = 1;
    for (int i = 1; i < SIZE; i++) {
        if (ray[i] > MAX) {
            MAX = ray[i];
            maxmonth = i + 1;
        }
    }
    cout << "The maximum profit is: " << MAX << " in month " << maxmonth << endl;

    int MIN = ray[0];
    int minmonth = 1;
    for (int i = 1; i < SIZE; i++) {
        if (ray[1] < MIN) {
            MIN = ray[i];
            minmonth = i + 1;
        }
    }
    cout << "The minimum profit is: " << MIN << " in month " << minmonth << endl;

    return 0;
}