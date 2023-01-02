// map in C++ stl
#include <iostream>
#include <map>
#include <string>
using namespace std;
void display(map<string, int> m)
{
    map<string, int>::iterator itr;
    for (itr = m.begin(); itr != m.end(); itr++)
        cout << (*itr).first << " " << (*itr).second << endl;
    cout << endl;
}
int main()
{
    map<string, int> marksMap;
    marksMap["Kunal"] = 95;
    marksMap["Peyush"] = 93;
    marksMap["Aman"] = 92;
    marksMap["Anupam"] = 91;
    marksMap["Ashneer"] = 99;
    marksMap.insert({{"Aisha", 99}, {"Sarif", 99}});
    display(marksMap);
    cout << "The size of the map is: " << marksMap.size() << endl;
    cout << "Checking whether the map is empty or not.. ";
    if (marksMap.empty() == 0)
        cout << "The map is not empty" << endl;
    else
        cout << "The map is empty" << endl;
    return 0;
}