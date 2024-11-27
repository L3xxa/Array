#include <iostream>
#include <limits>
using namespace std;

int main() {

    int profit;
    const int SIZE = 12;
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

    int start_range;
    int end_range;

    cout << "Enter the start range: ";
    cin >> start_range;
    cout << "Enter the end range: ";
    cin >> end_range;

    while (cin.fail() || start_range < 1 || end_range > 12 || start_range > end_range) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid range. Please enter a range between 1 and 12." << endl;
        cout << "Enter the start range: ";
        cin >> start_range;
        cout << "Enter the end range: ";
        cin >> end_range;
    }

    int max = ray[start_range - 1];
    for (int i = start_range; i <= end_range; i++) {
        if (ray[i - 1] > max) {
            max = ray[i - 1];
        }
    }
    cout << "Max profit in the range: " << max << endl;

    int min = ray[ start_range - 1];
    for (int i = start_range; i <= end_range; i++) {
        if (ray[i - 1] < min) {
            min = ray[i - 1];
        }
    }
    cout << "Min profit in the range: " << min << endl;

    return 0;
}