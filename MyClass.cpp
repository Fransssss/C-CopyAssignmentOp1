//
// Created by XaveF on 5/23/2022.
//

#include "MyClass.h"
#include <iostream>
using std::cout;
using std::endl;

MyClass::MyClass()
{
    cout << "[Default constructor called]" << endl;
    _value = new int;           // set space before assign a value
    *_value = 0;                 //
}

MyClass& MyClass::operator=(const MyClass &origObj)
{
    cout << "[Copy Assignment constructor called]" << endl;
    if(this != &origObj)
    {
        delete _value;
        _value = new int;
        *_value = *(origObj._value);
    }
    return *this;
}

void MyClass::SetVal(const int &val)
{
    *_value = val;
}

int MyClass::GetVal() const
{
    return *_value;
}

MyClass::~MyClass()
{
    cout << "[Destructor called]" << endl;
    delete _value;
}

