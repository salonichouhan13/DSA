#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    // Input array elements
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Pre-computation (Frequency Array)
    int hash[13] = {0};

    for (int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    int q;
    cout << "Enter number of queries: ";
    cin >> q;

    while (q--) {
        int number;

        cout << "Enter number to find frequency: ";
        cin >> number;

        if (number >= 0 && number <= 12) {
            cout << "Frequency = " << hash[number] << endl;
        } else {
            cout << "Number is out of range (0-12)." << endl;
        }
    }

    return 0;
}