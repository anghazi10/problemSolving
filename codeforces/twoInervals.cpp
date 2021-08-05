#include <iostream>
using namespace std;
void nl() { cout << endl; }
int main()
{
	long int start1, end1, start2, end2;
	cin >> start1 >> end1 >> start2 >> end2;
	if (end1 < start2 || end2 < start1)
	{
		cout << -1 << endl;
	}
	else
	{
		if (start1 < start2)
			start1 = start2;
		if (end1 > end2)
			end1 = end2;
		cout << start1 << " " << end1 << endl;
	}
	return 0;
}