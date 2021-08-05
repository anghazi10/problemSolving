#include <iostream>
using namespace std;

int main(){

    char c;
    cin >> c;
    if ( c == 'z' )    {
        cout << 'a' << endl;
        return 0;
    }
    c++;
    cout << c << endl;
    return 0;
}