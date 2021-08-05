#include <iostream>
#define ll long long
#include <cmath>
using namespace std;
void nl() { cout << endl; }
int main()
{

	long double i, j, k, l;
	cin >> i >> j >> k >> l;
	bool True = false;
	long double num1 = j * log(i);
	long double num2 = l * log(k);
	True = (num1 > num2);
	if (True)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}