#include <iostream>
#include <sstream>
using namespace std;
void nl(){cout<<endl;}
int main (){

	int n, t;
	while (true)
	{
		cin >> n;
		if (n == 1999)
		{
			cout << "Correct\n";
			return 0;
		}
		else
		{
			cout << "Wrong\n";
		}
	}
}
