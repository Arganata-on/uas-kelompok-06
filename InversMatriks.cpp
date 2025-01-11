/* Dari matrik ber-ordo 3x3 berikut lakukanlah invers dengan menggunakan bahasa
pemrograman C++. Gunakan Array untuk mempermudah perhitungan */

#include <iostream>
using namespace std;

double menghitungDeterminan(int size, int matriks[3][3]);
void inversMatriks(double determinan, int size, int matriks[3][3], double invers[3][3]);

int main()
{
    int matriks[3][3] = {{1, 0, 2},
                         {2, 2, 1},
                         {3, 1, 4}};

    int size = sizeof(matriks) / sizeof(matriks[0]);
    double invers[3][3];

    cout << "==============================\n";
    cout << "Matriks A:\n";
    cout << "==============================\n";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "| " << matriks[i][j] << " ";
        }
        cout << "|\n";
    }
    cout << "==============================\n";

    double determinan = menghitungDeterminan(size, matriks);

    cout << "==============================\n";

    if (determinan != 0)
    {
        inversMatriks(determinan, size, matriks, invers);

        cout << "Invers Matriks:\n";
        cout << "==============================\n";

        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                cout << "| " << invers[i][j] << " ";
            }
            cout << "|\n";
        }
        cout << "==============================\n";
    }
    else
    {
        cout << "Matriks tidak memiliki invers karena determinannya bernilai nol.\n";
    }

    return 0;
}

double menghitungDeterminan(int size, int matriks[3][3])
{
    double determinan = 0;
    for (int i = 0; i < size; i++)
    {
        determinan += matriks[0][i] * (matriks[1][(i + 1) % 3] * matriks[2][(i + 2) % 3] - matriks[1][(i + 2) % 3] * matriks[2][(i + 1) % 3]);
    }
    cout << "Determinan: " << determinan << '\n';
    return determinan;
}

void inversMatriks(double determinan, int size, int matriks[3][3], double invers[3][3])
{
    invers[0][0] = (matriks[1][1] * matriks[2][2] - matriks[2][1] * matriks[1][2]) / determinan;
    invers[0][1] = -(matriks[0][1] * matriks[2][2] - matriks[2][1] * matriks[0][2]) / determinan;
    invers[0][2] = (matriks[0][1] * matriks[1][2] - matriks[1][1] * matriks[0][2]) / determinan;
    invers[1][0] = -(matriks[1][0] * matriks[2][2] - matriks[2][0] * matriks[1][2]) / determinan;
    invers[1][1] = (matriks[0][0] * matriks[2][2] - matriks[2][0] * matriks[0][2]) / determinan;
    invers[1][2] = -(matriks[0][0] * matriks[1][2] - matriks[1][0] * matriks[0][2]) / determinan;
    invers[2][0] = (matriks[1][0] * matriks[2][1] - matriks[2][0] * matriks[1][1]) / determinan;
    invers[2][1] = -(matriks[0][0] * matriks[2][1] - matriks[2][0] * matriks[0][1]) / determinan;
    invers[2][2] = (matriks[0][0] * matriks[1][1] - matriks[1][0] * matriks[0][1]) / determinan;
}
