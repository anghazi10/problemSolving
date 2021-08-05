#include <iostream>
using namespace std;
void nl(){cout<<endl;}
int main (){
	int a, b, c, sum, sub, mul;
	char s, q;
	cin >> a >> s >> b >> q >> c;
	q = '=';
	if (s == '+')
	{
		sum = a + b;
		if (sum == c)
			cout << "Yes"<<endl;
		else
			cout << sum << endl;
	}
	else if (s == '-')
	{
		sub = a - b;
		if (sub == c)
			cout << "Yes" << endl;
		else
			cout << sub << endl;
	}
	else if (s == '*')
	{
		mul = a * b;
		if (mul == c)
			cout << "Yes" << endl;
		else
			cout << mul << endl;
	}

	return 0;
}
