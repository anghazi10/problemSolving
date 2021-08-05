#include <iostream>
using namespace std;
void nl() { printf("\n"); }
int main (){

	int n,number;
	cin >> n;
	while (n--)
	{
		cin >> number;
		while (number == 0)
		{
			int lastDigits = number % 10;
			cout << lastDigits << " ";
			break;
		}
		while (number != 0)
		{
			int lastDigits = number % 10;
			number/= 10;
			cout << lastDigits << " ";
		}
		nl();
	}

	return 0;
}
