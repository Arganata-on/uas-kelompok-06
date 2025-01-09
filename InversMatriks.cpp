/* Dari matrik ber-ordo 3x3 berikut lakukanlah invers dengan menggunakan bahasa
pemrograman C++. Gunakan Array untuk mempermudah perhitungan */

#include <iostream>
using namespace std;

int main()
{
    int matriks[][3] = {{4, 2, 8},
                        {2, 1, 5},
                        {3, 2, 4}};
    int baris = sizeof(matriks) / sizeof(matriks[0]);
    int kolom = sizeof(matriks[0]) / sizeof(matriks[0][0]);
    return 0;
}