#include <iostream>
using namespace std;
const int m = 50;
class items
{
    int itemCode[m];
    float itemPrice[m];
    int count;

public:
    void CNT(void)
    {
        count = 0;
    }
    void getitem(void);
    void displaySum(void);
    void remove(void);
    void displayItems(void);
};
void items::getitem(void)
{
    cout << "Enter item code: ";
    cin >> itemCode[count];
    cout << "Enter item cost: ";
    cin >> itemPrice[count];
    count++;
}
void items::displaySum(void)
{
    float sum = 0;
    for (int i = 0; i < count; i++)
        sum = sum + itemPrice[i];
    cout << "\nTotal value: " << sum << endl;
}
void items::remove(void)
{
    int a;
    cout << "Enter item code: ";
    cin >> a;
    for (int i = 0; i < count; i++)
        if (itemCode[i] == a)
            itemPrice[i] = 0;
}
void items::displayItems(void)
{
    cout << "\nCode Price" << endl;
    for (int i = 0; i < count; i++)
        cout << itemCode[i] << " " << itemPrice[i] << endl;
    cout << endl;
}
int main()
{
    items order;
    order.CNT();
    int x;
    do
    {
        cout << endl;
        cout << "You can do the following..\n";
        cout << "Enter appropriate number..\n\n";
        cout << "1. Add an item" << endl;
        cout << "2. Display total value" << endl;
        cout << "3. Delete an item" << endl;
        cout << "4. Display all item" << endl;
        cout << "5. Quit" << endl;
        cout << "\n\nWhat is your option: ";
        cin >> x;
        switch (x)
        {
        case 1:
            order.getitem();
            break;
        case 2:
            order.displaySum();
            break;
        case 3:
            order.remove();
            break;
        case 4:
            order.displayItems();
            break;
        case 5:
            break;
        default:
            cout << "Error in input, try again" << endl;
        }
    } while (x != 5);
    return 0;
}