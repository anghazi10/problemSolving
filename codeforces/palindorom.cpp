#include <iostream>
using namespace std;
void nl(){cout<<endl;}
int main (){

	int n, num;
	int lastDigits, reverse(0);
	cin >> n;// 12121
	num = n;
	while (n != 0)
	{
		lastDigits = n % 10;
		reverse = (reverse * 10) + lastDigits;
		n = n / 10;
	}
	if (num == reverse)
	{
		cout << reverse << endl << "YES\n";
	}else
	{
		cout << reverse << endl << "NO\n";
	}
	

	return 0;
}
