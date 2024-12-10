#include <iostream>
#include "String.h"
using namespace std;

int main()
{
    cout << "Number of String objects: " << String::getObjectCount() << endl;

    String str1;
    str1.display();
    cout << "Number of String objects: " << String::getObjectCount() << endl;

    int size;
    cout << "Enter the length of the string: ";
    cin >> size;

    String str2(size);
    str2.display();
    cout << "Number of String objects: " << String::getObjectCount() << endl;

    char userInput[100];
    cout << "Enter the string for initialization: ";
    cin >> userInput;

    String str3(userInput);
    str3.display();
    cout << "Number of String objects: " << String::getObjectCount() << endl;

    String str4 = str3;
    str4.display();
    cout << "Number of String objects: " << String::getObjectCount() << endl;

    return 0;
}