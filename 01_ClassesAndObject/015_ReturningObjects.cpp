#include <iostream>
using namespace std;
class matrix
{
    int m[3][3];

public:
    void read(void);
    void display(void);
    friend matrix trans(matrix);
};
void matrix::read(void)
{
    cout << "Enter the elements of the 3*3 matrix: \n";
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "m[" << i << "][" << j << "] = ";
            cin >> m[i][j];
        }
    }
}
void matrix::display(void)
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << m[i][j];
        }
        cout << endl;
    }
}
matrix trans(matrix m1)
{
    matrix m2;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            m2.m[i][j] = m1.m[j][i];
        }
    }
    return (m2);
}
int main()
{
    matrix mat1, mat2;
    mat1.read();
    cout << "\nYou entered the following matrix: " << endl;
    mat1.display();
    mat2 = trans(mat1);
    cout << endl;
    cout << endl;
    cout << "The transpose matrix is: " << endl;
    mat2.display();
    return 0;
}