#include <iostream>
#include <stdio.h>
using namespace std;
void nl(){	printf("\n");}
int main()
{
	int n, mini, pos,temp;
	cin >> n;
	int array[n];
	for (int index(0); index < n; ++index) {
		cin >> array[index];
	}
	mini = array[0];
	for (int indexout(0); indexout < n; ++indexout) {		
		for (int indexin(0); indexin < n-1; ++indexin)
		{
			if (array[indexin] > array[indexin+1])
			{
				temp = array[indexin];
				array[indexin] = array[indexin+1];
				array[indexin + 1] = temp;
			}
		}		
	}

	for (int index(0); index < n; ++index) {
		cout << array[index]<<" ";
	}//*/
	return 0;
}
