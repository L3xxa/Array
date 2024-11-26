#include <iostream>
using namespace std;

int main() {

    int storona;
    int const SIZE = 5;
    int arr[SIZE];

    for (int i = 0; i < SIZE; i++) {
        cout << "Enter the side of the square: ";
        cin >> storona;
        arr[i] = storona;
    }

    cout << "Perimeter = "
    << arr[0] + arr[1] + arr[2] + arr[3] + arr[4] << endl;

    return 0;
}
