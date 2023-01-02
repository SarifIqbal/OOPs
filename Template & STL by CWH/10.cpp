// list in C++ stl
#include <iostream>
#include <list>
using namespace std;
void display(list<int> l) // the for loop code is a bit different
{                         // from the display function in vector 10.cpp
    list<int>::iterator iter;
    for (iter = l.begin(); iter != l.end(); iter++)
        cout << *iter << " ";
    cout << endl;
}
int main()
{
    list<int> list1; // list of 0 length, no elements
    list1.push_back(3);
    list1.push_back(62);
    list1.push_back(75);
    list1.push_back(98);
    list1.push_back(75);
    list1.push_back(56);
    list<int>::iterator iter; // creating iterator
    iter = list1.begin();
    cout << *iter << endl; // displaying 1st element
    iter++;
    cout << *iter << endl; // displaying 2nd element
    cout << "Printing all element of list1: ";
    display(list1);
    cout << "Reversing list1: ";
    list1.reverse();
    display(list1);
    cout << "Reversing list1 again: ";
    list1.reverse();
    display(list1);
    cout << "Printing sorted list1: ";
    list1.sort();
    display(list1);
    cout << "Printing elements of list1 after deleting last element: ";
    list1.pop_back();
    display(list1);
    cout << "Printing elements of list1 after deleting first element: ";
    list1.pop_front();
    display(list1);
    cout << "Printing elements of list1 after deleting element 75: ";
    list1.remove(75);
    display(list1);
    cout << "As there were 2 occurence of 75 so both were deleted" << endl;
    list<int> list2(7); // list of 7 elements with no value, initialized as 0
    cout << "Printing all element of list2: ";
    display(list2); // 7 times 0 will be printed
    cout << "Setting value of list2" << endl;
    list<int>::iterator iter2;
    iter2 = list2.begin();
    *iter2 = 45;
    iter2++;
    *iter2 = 29;
    iter2++;
    *iter2 = 87;
    iter2++;
    cout << "Printing all element of list2: ";
    display(list2); // first 3 elements are initialized as 45 29 87
    cout << "list1 after merging list2 in it: ";
    list1.merge(list2);
    display(list1);
    return 0;
}