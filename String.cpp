#include "String.h"
#include <iostream>
using namespace std;

int String::objectCount = 0;

int String::strLength(const char* inputStr) const
{
	int count = 0;
	while (inputStr[count] != '\0')
	{
		count++;
	}
	return count;
}

void String::copyConstructor(char* dest, const char* src) const
{
	int i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

String::String()
{
	length = 80;
	str = new char[length + 1];
	str[0] = '\0';
	objectCount++;
}

String::String(int size)
{
	if (size <= 0) 
	{
		cout << "Invalid size. Using default size 80." << endl;
		size = 80;
	}
	length = size;
	str = new char[length + 1];
	str[0] = '\0';
	objectCount++;
}

String::String(const char* inputStr)
{
	length = strLength(inputStr);
	str = new char[length + 1];
	copyConstructor(str, inputStr);
	objectCount++;
}

String::String(const String& other)
{
	length = other.length;
	str = new char[length + 1];
	copyConstructor(str, other.str);
	objectCount++;
}

String::~String()
{
	delete[] str;
	objectCount--;
}

void String::display() const
{
	cout << "String: " << str << endl;
}

int String::getObjectCount()
{
	return objectCount;
}
