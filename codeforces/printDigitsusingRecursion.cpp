#include <bits/stdc++.h>
#define nl cout<<"\n"
typedef long long ll;
typedef unsigned long long ull;
typedef double dl;
using namespace std;

void printDigits(int n) {
    if (n == 0) {
        return;
    }

    printDigits(n / 10);
    int dig = n % 10;
    cout << dig << " ";
}
void fast() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main() {
    fast();
    ll t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        if (n == 0) {
            cout << 0; nl;
            continue;
        }
        printDigits(n); nl;
    }


    return 0;
}