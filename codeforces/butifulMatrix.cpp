#include <bits/stdc++.h>
using std::cin;
using std::cout;
void nl() { printf("\n"); }
int main()
{

    int n{5}, array[5][5], pos1, pos2;

    for (int row(0); row < n; ++row)
    {
        for (int col(0); col < n; ++col)
        {
            cin >> array[row][col];
            if (array[row][col])
            {
                pos1 = row, pos2 = col;
            }
        }
    }

    int moveH = pos1 - 2;
    int moveV = pos2 - 2;
    if (moveH < 0)
        moveH = -moveH;
    if (moveV < 0)
        moveV = -moveV;

    cout << moveH + moveV;
    nl();

    return 0;
}