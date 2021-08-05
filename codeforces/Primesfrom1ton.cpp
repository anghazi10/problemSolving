#include <iostream>
using namespace std;
void nl() { cout << endl; }
int main()
{

	int n, primeNumber;
	cin >> n;
	for (int i(2); i <= n; ++i)
	{
		primeNumber = i;
		for (int divisor(2); divisor <= n; ++divisor)
		{
			if (primeNumber % divisor == 0 && primeNumber != divisor)
			{
				break;
			}
			else if (divisor == n)
			{
				cout << primeNumber << " ";
				break;
			}
		}
	}
	return 0;
}
