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
string s = "";
void convert2Binary(int num) {
    if (num == 0) {
        return;
    }

    convert2Binary(num / 2);
    if (num % 2 == 0) {
        s += "0";
    } else {
        s += "1";
    }
}

int main() {
    fast();
    ll t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        s = "";
        if (n == 0) {
            cout << 0; nl;
            continue;
        }
        convert2Binary(n);
        // reverse(s.begin(), s.end());
        cout << s; nl;
    }

    return 0;
}