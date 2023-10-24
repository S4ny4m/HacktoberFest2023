/*
r=5,c=4;
****
*  *
*  *
*  *
****
*/
#include <iostream>
using namespace std;

int main()
{
    int row, col, j;
    cin >> row >> col;
    for (int i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (j == 0 || j == col - 1 || i == 0 || i == row - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}