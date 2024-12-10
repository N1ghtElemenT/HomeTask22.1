#pragma once
#include <iostream>
using namespace std;

class String
{
private:
    char* str;
    int length;
    static int objectCount;
    int strLength(const char* inputStr) const;
    void copyConstructor(char* dest, const char* src) const;
public:
    String();
    String(int size);
    String(const char* inputStr);
    String(const String& other);
    ~String();
    void display() const;
    static int getObjectCount();
};

