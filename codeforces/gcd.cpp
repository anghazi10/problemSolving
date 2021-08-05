#include <iostream>
using namespace std;
void nl(){cout<<endl;}
int main (){

	int n1,n2;
	cin >> n1 >> n2; // 8 12
	int n = (n1 >= n2 ? n1 : n2);
	for (int i(n); i >= 1; --i)
	{
		if (n1 % i == 0 && n2 % i == 0)
		{
			cout << i << endl;
			break;
		}
	}
	return 0;
}
