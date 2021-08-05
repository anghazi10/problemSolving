#include <iostream>
using namespace std;
void nl(){ printf("\n"); }
int main(){


	/*int n; cin >> n;
	bool check = false;
	for (int i = n; i > 0; i /= 10)	{
		if (i % 10 == 4 || i % 10 == 7)		{
			check = true;
		} else{
			check = false; break;
		}*/
		// } if (check){
			// cout << "YES";


			// /*
	int a, b, digit, LuckyNumber;
	bool check = false;
	cin >> a >> b;
	for (int i = a; i <= b; i++){
		LuckyNumber = i;
		while (LuckyNumber != 0){
			digit = LuckyNumber % 10;
			if (digit == 7 || digit == 4){// 747
				LuckyNumber /= 10;
				check = true;
				continue;
			} else{
				check = false;
				break;
			}
		}
		if (check){
			cout << i << " "; // nl();
		} else{
			LuckyNumber = -1;
			check = false;
		}

		if (i == b)		{
			cout << LuckyNumber;
		}

	}//*/

	nl();
	return 0;
}
