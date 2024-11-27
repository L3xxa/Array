#include <iostream>
#include <random>
using namespace std;

int main() {
    constexpr int SIZE = 10;
    int masive [SIZE];

    random_device rd;
    mt19937 mersenne(rd());
    uniform_int_distribution<> uid(-100, 100);


    for (int i = 0; i < SIZE; ++i) {
        masive[i] = uid(mersenne);
        cout << masive[i] << " ";
    }
    cout << endl;


    int max = 0;
    for (int i = 1; i < SIZE; i++ ) {
        if (masive[i] > max) {
            max = masive[i];
        }

    }
    cout << "Max element: " << max << endl;

    int min = 0;
    for (int i = 1; i < SIZE; i++ ) {
        if (masive[i] < min) {
            min = masive[i];
        }

    }
    cout << "Min element: " << min << endl;


    return 0;
}
