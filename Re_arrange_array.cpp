#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int a[n], positive[n], negative[n];
    int p = 0, q = 0;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];

        if (a[i] >= 0)
            positive[p++] = a[i];
        else
            negative[q++] = a[i];
    }

    cout << "Positive elements: ";
    for (int i = 0; i < p; i++)
        cout << positive[i] << " ";

    cout << "\nNegative elements: ";
    for (int i = 0; i < q; i++)
        cout << negative[i] << " ";

    cout << endl;

    return 0;
}
