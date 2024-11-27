#include <iostream>
#include <random>
#include <algorithm>
using namespace std;

int main() {

    constexpr int SIZE = 10;
    int masive [SIZE];

    random_device rd;
    mt19937 mersenne(rd());
    uniform_int_distribution<> uid(-10, 10);


    for (int i = 0; i < SIZE; ++i) {
        masive[i] = uid(mersenne);
        cout << masive[i] << " ";
    }
    cout << endl;
    cout << endl;

    int negative = 0;
    for (int i = 0; i < SIZE; i++) {
        if (masive[i] < 0) {
            negative += masive[i];
        }
    }
    cout << "The first condition" << endl;
    cout << "Negative numbers: " << negative << endl;
    cout << endl;

    cout << "The second condition" << endl;
    int min_value = *min_element(masive, masive + SIZE);
    cout << "Min value: " << min_value << endl;
    int max_value = *max_element(masive, masive + SIZE);
    cout << "Max value: " << max_value << endl;


    int count = 1;
    for (int i = min_value; i <= max_value; i++) {
        if (i == 0) {
            continue;
        }
        count *= i;
    }
    cout << "Min --> Max = " << count << endl;
    cout << endl;

    cout << "The third condition" << endl;
    int even = 1;
    for (int i = 0; i < SIZE; i++) {
        if (masive[i] != 0 && masive[i] % 2 == 0) {
            even *= masive[i];
        }
    }
    cout << "The product of even number = " << even << endl;
    cout << endl;

    cout << "The fourth condition" << endl;
    int first_negative_index = 0;
    int last_negative_index = 0;
    for (int i = 0; i < SIZE; i++) {
        if (masive [i] < 0) {
            first_negative_index = i;
            break;
        }
    }
    cout << "The first negative index = " << first_negative_index << endl;

    for (int i = SIZE - 1; i >= 0; i--) {
        if (masive[i] < 0) {
            last_negative_index = i;
            break;
        }
    }
    cout << "The last negative index = " << last_negative_index << endl;

    int sum_index = 0;
    for (int i = first_negative_index + 1; i < last_negative_index - 1; i++) {
        sum_index += masive[i];
    }
    cout << "The sum elements = " << sum_index << endl;

    return 0;
}
