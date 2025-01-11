#include <iostream>
using namespace std;

double menghitungDeterminan(int size, int matriks[3][3]);
void inverseMatriks(double determinan, int size, int matriks[3][3], double invers[3][3]);

int main()
{
    int matriks[3][3] = {{1, 0, 2},
                         {2, 2, 1},
                         {3, 1, 4}};

    int size = sizeof(matriks) / sizeof(matriks[0]);
    double invers[3][3];

    cout << "Matriks:\n";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << matriks[i][j] << " ";
        }
        cout << '\n';
    }

    double determinan = menghitungDeterminan(size, matriks);
    if (determinan != 0)
    {
        inverseMatriks(determinan, size, matriks, invers);

        cout << "\nInvers Matriks:\n";
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                cout << invers[i][j] << " ";
            }
            cout << '\n';
        }
    }
    else
    {
        cout << "\nMatriks tidak memiliki invers karena determinannya nol.\n";
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

void inverseMatriks(double determinan, int size, int matriks[3][3], double invers[3][3])
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
