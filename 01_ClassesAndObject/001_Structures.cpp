#include <iostream>
#include <string.h>
using namespace std;;
using std::endl;
struct student
{
    char name[20];
    int roll_number;
    float total_marks;
};
int main()
{
    struct student A;
    strcpy(A.name, "Sarif Iqbal");
    A.roll_number = 29;
    A.total_marks = 92;
    int Final_Marks = A.total_marks + 5;
    std::cout << A.name << endl;
    std::cout << A.roll_number << endl;
    std::cout << Final_Marks << endl;
    return 0;
}