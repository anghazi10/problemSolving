#include <iostream>
using namespace std;
void nl() { cout << endl; }
void onespace() { cout << " "; }
int main()
{
	long int n, q, x, counter(0);
	bool flag = false;
	cin >> n >> q;
	int array[n] = {0};
	int search_array[q] = {0};
	for (int index(0); index < n; ++index)
		cin >> array[index];

	for (int index(0); index < q; ++index)
		cin >> search_array[index];

	for (int indexS(0); indexS < q; ++indexS) {	
		for (int index(0); index < n; ++index)
		{
			if (search_array[indexS] == array[index])
			{
				cout << "found" << endl;
				break;
			}
			else if (index == n - 1)
			{
				cout << "not found" << endl;
			}
		}
	}
}

	/*#include <iostream>
	using namespace std;
	void nl() { cout << endl; }
	void onespace() { cout << " "; }
	int main(){
		long int n, q, x,counter(0);
		bool flag = false;
		cin >> n >> q;
		int array[n];
		for (int index(0); index < n; ++index)
			cin >> array[index];

		while (q--)
		{
			cin >> x;
			for (int index(0); index < n; ++index)
			{
				if (x == array[index])
				{
					cout << "found" << endl;
					break;
				}
				else if (index == n - 1)
				{
					cout << "not found" << endl;
				}
			}
		}
		
		int n,counter(0);
		cin >> n;
		int array[n], barray[n];
		for (int index(0); index < n; ++index)
			cin >> array[index];

		for (int index(0); index < n; ++index) 
			cin >> barray[index];

		for (int index(0); index < n; ++index) {
			for (int index1(0); index1 < n; ++index1) {
				if (barray[index] == array[index1] && barray[index])
				{
					++counter;
					break;
				}
			}
		}

		if (counter == n)
		{
			cout << "yes";
		}else
			cout << "no";

		nl();
		return 0;
	}
	*/