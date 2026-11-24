#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int a[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int minElement = a[0];
    int maxDifference = 0;

    for (int i = 1; i < n; i++) {
        int difference = a[i] - minElement;

        if (difference > maxDifference)
            maxDifference = difference;

        if (a[i] < minElement)
            minElement = a[i];
    }

    cout << "Maximum difference = " << maxDifference << endl;

    return 0;
}
