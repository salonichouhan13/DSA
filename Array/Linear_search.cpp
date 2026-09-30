#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> Array, int num) {

    for(int i = 0; i < Array.size(); i++) {
        if(Array[i] == num) {
            return i;
        }
    }

    return -1;
}

int main() {

    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> Array(n);

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> Array[i];
    }

    int num;
    cout << "Enter element to search: ";
    cin >> num;

    int result = linearSearch(Array, num);

    cout << "Index = " << result;

    return 0;
}