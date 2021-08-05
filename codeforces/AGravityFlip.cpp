#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;

    int arr[n];
    for (int index{0}; index < n; ++index) {
        cin >> arr[index];
    }

    int sizeOfArray = sizeof(arr) / sizeof(arr[0]);

    stable_sort(arr, arr + sizeOfArray);

    for (int index{0}; index < n; ++index) {
        cout << arr[index] << " ";
    }


    return 0;
}
