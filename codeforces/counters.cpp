#include <iostream>
#include <sstream>
using namespace std;
void nl(){cout<<endl;}
int main (){

	int n, t, evencounter(0), oddcounter(0), poscounter(0), negcounter(0);
	cin >> t;

	while (t--)
	{
		cin >> n;
			if (n % 2 == 0)
			{
				++evencounter;
			}else
			{
				++oddcounter;
			}
			if (n > 0)
			{
				++poscounter;
			}
			else if (n < 0)
			{
				++negcounter;
			}
		
	}
	cout << "Even: " << evencounter<<endl;
	cout << "Odd: " << oddcounter<<endl;
	cout << "Positive: " << poscounter<<endl;
	cout << "Negative: " << negcounter << endl;

	nl();
	return 0;
}
