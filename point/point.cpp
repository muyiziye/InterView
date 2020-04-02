#include <iostream>

using namespace std;

int main()
{
    int value1 = 0;
    int* val_p = &value1;
    int &other_name = value1;
    cout << "the address of value1 is" << &value1 << endl;
    cout << "the address of val_p is" << val_p << endl;
    cout << "the address of other_name is" << &other_name << endl;
    return 0;
}