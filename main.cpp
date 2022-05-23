// Title:
// Purpose:
// Author:
// Have fun - enjoy the process - practices make improvement

#include <iostream>
#include "MyClass.h"

using std::cout;
using std::endl;

int main()
{
    cout << endl;
    MyClass fClass;
    MyClass sClass;

    cout << endl;
    cout << "Initial value 1st object type Myclass: " << fClass.GetVal() << endl;
    cout << "Initial value 2nd object type Myclass: " << sClass.GetVal() << endl;

    fClass.SetVal(10);
    sClass = fClass;
    fClass.SetVal(2);

    cout << endl;
    cout << "Latest value 1st object type Myclass: " << fClass.GetVal() << endl;
    cout << "Latest value 2nd object type Myclass: " << sClass.GetVal() << endl;


  return 0;
}
