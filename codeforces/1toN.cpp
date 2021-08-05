#include <iostream>
#include <sstream>
using namespace std;
void nl(){cout<<endl;}
int main (){

	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cout << i << endl;
	}

	nl();
	return 0;
}
	/*string num;
	cin >> num;
	stringstream convert(num);
	int number,array[6],div(100000),sum(0);
	convert >> number;

	for (int index(0); index < 6; ++index) {
		array[index] = number % 10;
		number = number / 10;
		sum += array[index];
	}*/