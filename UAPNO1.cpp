#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    cout << "Masukkan jumlah baris: ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < (2 * n); j++)
        {
            if (i + j <= n - 1)
                cout << "*";
            else
                cout << " ";
            if ((i + n) <= j)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }

    return 0;
}