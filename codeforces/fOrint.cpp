#include <iostream>
using namespace std;
void nl(){cout<<endl;}
int main (){
	float fnum;
	cin >> fnum;
	int nnum = fnum;
	if (fnum == nnum)
	{
		cout << "int " << nnum << endl;
	}else
	{
		cout << "float " << nnum <<" "<< fnum - nnum << endl;
	}

	return 0;
}
