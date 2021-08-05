#include <iostream>
#include <sstream>
using namespace std;
void nl(){cout<<endl;}
int main (){

	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		if (n == 1)
		{
			cout << -1;
		}
		if (i % 2 == 0)
		{
			cout << i << endl;
		}
	}
	
	

	nl();
	return 0;
}
