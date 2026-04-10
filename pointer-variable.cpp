#include <iostream>
using namespace std;

int main()
{
    int number = 50; // Normal variable
    int *ptr;        // Pointer variable declaration

    ptr = &number; // Pointer mein 'number' ka address store kiya (& = Address-of operator)

    cout << "Variable ki value: " << number << endl;
    cout << "Variable ka address: " << &number << endl;
    cout << "Pointer mein store address: " << ptr << endl;

    // --- Dereferencing Magic ---
    // Yahan '*' ka matlab hai "value at address"
    cout << "Pointer ke zariye value (Dereferencing): " << *ptr << endl;

    // Pointer ke zariye value change karna
    *ptr = 100;

    cout << "Update ke baad variable ki value: " << number << endl;

    return 0;
}