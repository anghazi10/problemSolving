#include <iostream>
using namespace std;
void nl() { printf("\n"); }
int main(){

	int numOfFriends, hightOfWall, hightOfFriends,sum(0);
	cin >> numOfFriends >> hightOfWall;
	while (numOfFriends--)
	{
		cin>> hightOfFriends;
		if (hightOfFriends > hightOfWall)
			sum++;
		sum++;
	}

	cout << sum;
	nl();
	return 0;
}
