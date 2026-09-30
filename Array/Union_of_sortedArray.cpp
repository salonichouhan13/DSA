#include <bits/stdc++.h>
using namespace std;

vector<int> sortedArray(vector<int> a, vector<int> b) {

    int n1 = a.size();
    int n2 = b.size();

    set<int> st;

    for(int i = 0; i < n1; i++) {
        st.insert(a[i]);
    }

    for(int i = 0; i < n2; i++) {
        st.insert(b[i]);
    }

    vector<int> temp;

    for(auto it : st) {
        temp.push_back(it);
    }

    return temp;
}

int main() {

    // First array ka input
    int n1;
    cout << "Enter size of 1st array: ";
    cin >> n1;

    vector<int> a(n1);

    cout << "Enter 1st array elements: ";
    for(int i = 0; i < n1; i++) {
        cin >> a[i];
    }


    // Second array ka input
    int n2;
    cout << "Enter size 2nd array: ";
    cin >> n2;

    vector<int> b(n2);

    cout << "Enter 2nd array elements: ";
    for(int i = 0; i < n2; i++) {
        cin >> b[i];
    }


    // Function call
    vector<int> result = sortedArray(a, b);


    // Output
    cout << "Union: ";

    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}