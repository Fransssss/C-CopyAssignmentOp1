//
// Created by XaveF on 5/23/2022.
//

#ifndef C_COPYASSIGNMENTOP1_MYCLASS_H
#define C_COPYASSIGNMENTOP1_MYCLASS_H


class MyClass
{
private:
    int* _value;
public:
    MyClass();
    MyClass& operator=(const MyClass& origObj);
    ~MyClass();
    void SetVal(const int& val);
    int GetVal()const;
};


#endif //C_COPYASSIGNMENTOP1_MYCLASS_H
