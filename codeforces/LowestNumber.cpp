#include <iostream>
using namespace std;
void nl(){	printf("\n");}
int main (){
	int n,lowest(999999999),pos;
	cin >> n;
	int array[n];
	for (int index(0); index < n; ++index) {
		cin >> array[index];
	} 

	for (int index(0); index < n; ++index) {
		if (array[index] <= lowest&&lowest!=array[index])
		{
			lowest = array[index];
			pos = index;
		}
	}

	cout << lowest << " " << pos+1<<endl;


	return 0;
}
