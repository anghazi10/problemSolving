#include <iostream>
using namespace std;
void nl(){cout<<endl;}
int main (){

	int n, t,result(1);
	cin >> n;
	bool flag = false;
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			flag = true;
			break;
		}
		else
		{
			flag = false;
		}
	}
	if (!flag)
	{
		cout << "YES" << endl;
	}else
	{
		cout << "NO"<< endl;
	}
	

	return 0;
}
