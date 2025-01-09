/* Dari matrik ber-ordo 3x3 berikut lakukanlah invers dengan menggunakan bahasa
pemrograman C++. Gunakan Array untuk mempermudah perhitungan */

#include <iostream>
using namespace std;

void getDetermine(int matriks[3][3]);

void showInvers();

int main()
{
    int matriks[3][3] = {{4, 2, 8},
                         {2, 1, 5},
                         {3, 2, 4}};

    int ukuran = sizeof(matriks) / sizeof(matriks[0]);

    cout << "Matriks A = \n";

    for (int i = 0; i < ukuran; i++)
    {
        for (int j = 0; j < ukuran; j++)
        {
            cout << matriks[i][j] << " ";
        }
        cout << '\n';
    }

    getDetermine(matriks);

    return 0;
}

void getDetermine(int matriks[3][3])
{
    float determinan = 0;
    determinan = matriks[0][0] * (matriks[1][1] * matriks[2][2] - matriks[1][2] * matriks[2][1]) - matriks[0][1] * (matriks[1][0] * matriks[2][2] - matriks[1][2] * matriks[2][0]) + matriks[0][2] * (matriks[1][0] * matriks[2][1] - matriks[1][1] * matriks[2][0]);

    cout << determinan;
}
void showInvers() {}