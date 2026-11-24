#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int a[n];
    int total = 0, leftSum = 0;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }

    for (int i = 0; i < n; i++) {
        total -= a[i];

        if (leftSum == total) {
            cout << "Equilibrium index = " << i << endl;
            return 0;
        }

        leftSum += a[i];
    }

    cout << "No equilibrium index found." << endl;

    return 0;
}
