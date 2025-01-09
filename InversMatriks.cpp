/* Dari matrik ber-ordo 3x3 berikut lakukanlah invers dengan menggunakan bahasa
pemrograman C++. Gunakan Array untuk mempermudah perhitungan */

#include <iostream>
using namespace std;

void getDetermine(int ukuran, int matriks[3][3]);

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

    return 0;
}

void getDetermine(int ukuran, int matriks[3][3])
{
    float determinan;

    for (int i = 0; i < ukuran; i++)
    {
        determinan += (matriks[0][i] * (matriks[1][(i + 1) % ukuran] * matriks[2][(i + 2) % ukuran] - matriks[1][(i + 2) % ukuran] * matriks[2][(i + 1) % ukuran]));
    }
}

void showInvers() {}