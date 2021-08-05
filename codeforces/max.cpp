#include <iostream>
#include <sstream>
using namespace std;
void nl(){cout<<endl;}
int main (){

	int n, t, max(-999999999);
	cin >> n;
	while (n--)
	{
		cin >> t;
		if (t > max)
		{
			max = t;
		}
	}
	cout << max;
	return 0;
}
