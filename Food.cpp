#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid number of elements. Exiting program." << endl;
        return 1;
    }

    double numbers[n];
    double sum = 0.0;

    cout << "Enter " << n << " numbers:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
        sum += numbers[i];
    }

    double average = sum / n;
    cout << "The average of the numbers is: " << average << endl;

    return 0;
}
