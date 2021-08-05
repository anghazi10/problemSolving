#include <iostream>
using namespace std;
void nl(){	printf("\n");}
int main (){
	int n, nOfQ, q;
	cin >> n;
	int array[n];
	for (int index(0); index < n; ++index) {
		cin >> array[index];
	}

	for (int index(0); index < n; ++index) {
		if (array[index] == 0)
		{
			array[index] = 0;
		}
		else if (array[index] > 0)
		{
			array[index] = 1;
		}else
		{
			array[index] = 2;
		}
	}

	for (int index(0); index < n; ++index)
	{
		cout << array[index]<<" ";
	}

	return 0;
}
