#include <iostream>
using namespace std;

int main() {
    const int n = 5;
    double arr[n] = {3.5, 1.2, 7.8, 2.4, 5.1};

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] < arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << "відсортований масив: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    double diff = arr[0] - arr[n - 1];

    cout << "різниця: " << diff << endl;

    return 0;
}