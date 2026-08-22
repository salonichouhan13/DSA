#include <bits/stdc++.h>
using namespace std;

bool SortedArray(vector<int>& array) {

    for(int i = 1; i < array.size(); i++) {

        if(array[i] < array[i-1]) {
            return false;
        }
    }

    return true;
}

int main() {

    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> array(n);

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> array[i];
    }

    // Function call
    bool ans = SortedArray(array);

    cout << boolalpha << ans;

    return 0;
}