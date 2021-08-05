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

bool palindromeArray(int* arr, int len) {
    if (len <= 0)
        return true;

    if (arr[0] == arr[len - 1])
        return palindromeArray(arr + 1, len - 2);
    else
        return false;
}
const int N = 1e6 + 5;
int arr[N];
int main() {

    cout << N;
    fast();
    int n; cin >> n;
    for (int index{0}; index < n; ++index) {
        cin >> arr[index];
    }
    if (palindromeArray(arr, n))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
