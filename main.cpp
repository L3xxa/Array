#include <iostream>
#include <random>
#include <algorithm>
using namespace std;

int main() {
    constexpr int SIZE = 10;
    int masive[SIZE];

    random_device rd;
    mt19937 mersenne(rd());
    uniform_int_distribution<> uid(-10, 10);

    cout << "Array elements: ";
    for (int i = 0; i < SIZE; ++i) {
        masive[i] = uid(mersenne);
        cout << masive[i] << " ";
    }
    cout << endl << endl;

    int negative_sum = 0;
    for (int i = 0; i < SIZE; i++) {
        if (masive[i] < 0) {
            negative_sum += masive[i];
        }
    }
    cout << "\033[32mThe first condition\033[0m" << endl;
    cout << "Sum of negative numbers: " << negative_sum << endl << endl;

    cout << "\033[32mThe second condition\033[0m" << endl;
    int min_index = min_element(masive, masive + SIZE) - masive;
    int max_index = max_element(masive, masive + SIZE) - masive;

    cout << "Min value: " << masive[min_index] << " at index " << min_index << endl;
    cout << "Max value: " << masive[max_index] << " at index " << max_index << endl;

    if (min_index > max_index) {
        swap(min_index, max_index);
    }

    int product_between = 1;
    for (int i = min_index; i <= max_index; i++) {
        if (masive[i] != 0) {
            product_between *= masive[i];
        }
    }
    cout << "Product of elements between Min and Max indices (inclusive): " << product_between << endl << endl;

    cout << "\033[32mThe third condition\033[0m" << endl;
    int even_product = 1;
    bool has_even = false;
    for (int i = 0; i < SIZE; i++) {
        if (masive[i] != 0 && masive[i] % 2 == 0) {
            even_product *= masive[i];
            has_even = true;
        }
    }
    if (has_even) {
        cout << "Product of even numbers: " << even_product << endl;
    } else {
        cout << "No even numbers found." << endl;
    }
    cout << endl;

    cout << "\033[32mThe fourth condition\033[0m" << endl;
    int first_negative_index = -1;
    int last_negative_index = -1;

    for (int i = 0; i < SIZE; i++) {
        if (masive[i] < 0) {
            first_negative_index = i;
            break;
        }
    }

    for (int i = SIZE - 1; i >= 0; i--) {
        if (masive[i] < 0) {
            last_negative_index = i;
            break;
        }
    }

    if (first_negative_index != -1 && last_negative_index != -1 && first_negative_index < last_negative_index) {
        int sum_between_negatives = 0;
        for (int i = first_negative_index + 1; i < last_negative_index; i++) {
            sum_between_negatives += masive[i];
        }
        cout << "First negative index: " << first_negative_index << endl;
        cout << "Last negative index: " << last_negative_index << endl;
        cout << "Sum of elements between first and last negative indices: " << sum_between_negatives << endl;
    } else {
        cout << "Not enough negative numbers for calculation." << endl;
    }

    return 0;
}