#include <bits/stdc++.h>
using namespace std;
int main() {

    string s1, s2; int ans = 0;
    cin >> s1 >> s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    for (int index{0}; index < s1.length(); ++index) {
        if (s1.at(index) != s2.at(index)) {
            if (s1.at(index) < s2.at(index))
                ans = -1;
            else if (s1.at(index) > s2.at(index))
                ans = 1;
            else if (s1.at(index) == s2.at(index))
                ans = 0;
            break;
        }
    }
    cout << ans << "\n";

    return 0;
}
