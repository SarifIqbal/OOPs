#include <iostream>
#include <cstring>
using namespace std;
class media
{
protected:
    char title[50];
    float price;

public:
    media(char *s, float a)
    {
        strcpy(title, s);
        price = a;
    }
    virtual void display() {} // empty virtual function
};
class book : public media
{
    int pages;

public:
    book(char *s, float a, int p) : media(s, a)
    {
        pages = p;
    }
    void display();
};
class tape : public media
{
    float time;

public:
    tape(char *s, float a, float t) : media(s, a)
    {
        time = t;
    }
    void display();
};
void book ::display()
{
    cout << "Title: " << title << endl;
    cout << "Pages: " << pages << endl;
    cout << "Price: " << price << endl;
}
void tape ::display()
{
    cout << "Title: " << title << endl;
    cout << "Play time: " << time << endl;
    cout << "Price: " << price << endl;
}
int main()
{
    char *title = new char[30];
    float price, time;
    int pages;
    // Book details
    cout << "Enter Book Details" << endl;
    cout << "Title: ";
    cin >> title;
    cout << "Price: ";
    cin >> price;
    cout << "Pages: ";
    cin >> pages;
    book book1(title, price, pages);
    // Tape details
    cout << "Enter Tape Details" << endl;
    cout << "Title: ";
    cin >> title;
    cout << "Price: ";
    cin >> price;
    cout << "Play time: ";
    cin >> time;
    tape tape1(title, price, time);
    media *list[2];
    list[0] = &book1;
    list[1] = &tape1;
    cout << endl;
    cout << endl;
    cout << "Media Details";
    cout << endl;
    cout << ".......BOOK.......";
    cout << endl;
    list[0]->display(); // display book details
    cout << endl;
    cout << ".......TAPE.......";
    cout << endl;
    list[1]->display(); // display tape details
    return 0;
}