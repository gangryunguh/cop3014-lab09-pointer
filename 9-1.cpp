//
//

#include <iostream>
using namespace std;
int main()
{
    int one = 10;
    int *ptr1 = nullptr; // ptr1 is a pointer variable that points to an int
    ptr1 = &one;         // &one indicates that the address, not the
                         // contents, of one is being assigned to ptr1.
                         // Remember that ptr1 can only hold an address.
                         // Since ptr1 holds the address where the variable
                         // one is stored, we say that ptr1 "points to" one.

    cout << "The value of one is  " << one  << endl << endl;
    cout << "The value of &one is " << &one << endl << endl;
    cout << "The value of ptr1 is " << ptr1 << endl << endl;
    cout << "The value of *ptr1 is " << *ptr1 << endl << endl;

    return 0;
}