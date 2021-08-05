#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(0);
    int t, ans{0}, total{0};
    cin >> t;

    while (t--) {
        int temp;
        cin >> temp;
        if (temp == -1) {
            if (!total)
                ans++;
            else
                total--;
        } else
            total += temp;
    }

    cout << ans << "\n";

    return 0;
}
