#include <bits/stdc++.h>
#define nl cout<<"\n"
typedef long long ll;
typedef unsigned long long ull;
typedef double dl;
using namespace std;
void fast() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
}

void reverseArray(int* arr, int len) {
    if (len == 0) {
        return;
    }
    int indx = len - 1;
    if ((indx) % 2 == 0) {
        cout << arr[indx] << " ";
    }
    reverseArray(arr, len - 1);
}

int arr[10000];
int main() {
    fast();
    ll n;
    cin >> n;

    for (int index{0}; index < n; ++index) {
        cin >> arr[index];
    }

    reverseArray(arr, n);

    return 0;
}