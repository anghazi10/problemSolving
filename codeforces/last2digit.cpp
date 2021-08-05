#include <iostream>
using namespace std;
void nl() { cout << endl; }
int main()
{
	long long int a, b, c, d,mul;
	cin >> a >> b >> c >> d;
	a= (a % 100) ;
    b= (b % 100);
    c= (c % 100);
	d=(d % 100);
	mul = (a * b * c * d) % 100;
	if (mul < 10)
	{
		cout << "0" << mul;
	}else
	{
		cout << mul;
	}
	nl();
	return 0;
}
