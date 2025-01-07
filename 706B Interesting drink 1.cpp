#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sort the array for binary search
    sort(arr.begin(), arr.end());

    int p;
    cin >> p;
    vector<int> arr1(p);

    for (int j = 0; j < p; j++) {
        cin >> arr1[j];
        // Use upper_bound to find the count of elements <= arr1[j]
        int count = upper_bound(arr.begin(), arr.end(), arr1[j]) - arr.begin();
        cout << count << endl;
    }

    return 0;
}

