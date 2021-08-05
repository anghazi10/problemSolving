#include<iostream>
using namespace std;
int main() {

    int n; cin >> n;
    int before[n], after[n];
    bool same = true;

    for (int index{0}; index < n; ++index) {
        cin >> before[index];
        cin >> after[index];
        same &= (before[index] == after[index]);
    }

    bool orderd = true, breakNLoop = false;
    for (int index{0}; index < n; index++) {
        for (int i{index + 1}; i < n; ++i) {
            if (before[index] < before[i]) {
                orderd = false;
                breakNLoop = true; break;
            }
        }
        if (breakNLoop) {
            break;
        }
    }

    if (same and orderd) {
        cout << "maybe\n";
    } else if (same and !orderd) {
        cout << "unrated\n";
    } else {
        cout << "rated\n";
    }

    return 0;
}
