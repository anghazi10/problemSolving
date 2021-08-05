#include <iostream>
using namespace std;
void nl() { printf("\n"); }
int main(){

	int n, p,v,t,sol(0);
	cin >> n;
	while (n--)
	{
		cin >> p >> v >> t;
		if (p == 1 && (v == 1 || t == 1))
		{
			sol++;
		}
		else if (v == 1 && (p == 1 || t == 1))
		{
			sol++;
		}
	}

	cout << sol;
	nl();
	return 0;
}
