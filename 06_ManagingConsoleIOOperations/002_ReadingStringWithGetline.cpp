#include <iostream>
using namespace std;
int main()
{
    int size = 20;
    char city[20];
    cout << "Enter city name: " << endl;
    cin >> city;
    cout << "City name: " << city << "\n\n";

    cout << "Enter city name again: " << endl;
    cin.getline(city, size);
    cout << "City name now: " << city << "\n\n";

    cout << "Enter another city name: " << endl;
    cin.getline(city, size);
    cout << "New city name: " << city << "\n\n";
    return 0;
}