#include<iostream>
using namespace std;
int main() {

    int price, denominationofMoney;
    cin >> price >> denominationofMoney;

    for (int i{1}; ; ++i) {
        int ans = (i * price);
        if (ans % 10 == 0) {
            cout << i << "\n"; break;
        } else {
            ans -= denominationofMoney;
            if (ans % 10 == 0) {
                cout << i << "\n"; break;
            }
        }
    }


    return 0;
}
