#include <iostream>
using namespace std;
void nl() { printf("\n"); }
int main(){

	int n,Anton(0),Danik(0);
	char s;
	cin >> n;
	while (n--)
	{
		cin >> s;
		if (s == 'A')
		{
			Anton++;
		}else if(s=='D')
		{
			Danik++;
		}
	}
	if (Anton == Danik)
	{
		cout << "Friendship";
	}
	else if (Anton > Danik)
	{
		cout << "Anton";
	}else
	{
		cout << "Danik";
	}
	nl();
	return 0;
}
