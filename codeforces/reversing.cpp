#include <iostream>
using namespace std;
void nl(){	printf("\n");}
int main (){
	int n,lowest(999999999),pos;
	cin >> n;
	int array[n];
	for (int index(0); index < n; ++index) {
		cin >> array[index];
	} //5-4-1
	pos = n / 2;
	for (int index(0); index < pos; ++index)
	{
		int last = n - index - 1;
		int temp = array[index];
		array[index] = array[last];
		array[last] = temp;
	}

	for (int index(0); index < n; ++index) {
		cout << array[index]<<" ";
	}

	return 0;
}
