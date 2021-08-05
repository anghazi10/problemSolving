#include <iostream>
using namespace std;
void nl(){	printf("\n");}
int main (){
	int n;
	cin >> n;
	int array[n];
	for (int index(0); index < n; ++index) {
		cin >> array[index];
	}

	for (int index(0); index < n; ++index) {
		if (array[index] <= 10)
		{
			cout << "A[" << index << "]"
				<< " = " << array[index]<<endl;
		}
	}


	return 0;
}
