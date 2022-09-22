#include <iostream>
using namespace std;
class code
{
    int id;

public:
    code() {}
    code(int a)
    {
        id = a;
    }
    code(code &x)
    {
        id = x.id;
    }
    void display(void)
    {
        cout << id;
    }
};
int main()
{
    code A(100); // object A is created and initialized by constructor
    code B(A);   // copy constructor called
    code C = A;  // copy constructor called again
    code D;      // D is created not initialized
    D = A;       // copy constructor called again
    cout << "id of A: "; A.display(); cout << endl;
    cout << "id of B: "; B.display(); cout << endl;
    cout << "id of C: "; C.display(); cout << endl;
    cout << "id of D: "; D.display();
    return 0;
}