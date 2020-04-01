#include <iostream>
#include <string.h>
#include "constructor.hpp"

using namespace std;

constructor_test::constructor_test(int type_1){
    cout << "call constructor #1" << endl;
    p_instance  = new int(type_1);
}

constructor_test::constructor_test(int type_2, bool tmp){
    cout << "call constructor #2" << endl;
    p_instance  = new int(type_2);
}

constructor_test::constructor_test(const constructor_test& obj){
    cout << "call copy constructor" << endl;
    p_instance = new int(*(obj.p_instance));
    //*this = obj;
}

constructor_test & constructor_test::operator =(const constructor_test& obj){
    cout << "call = constructor" << endl;
    this->p_instance = new int(*(obj.p_instance));
    return *this;
}

sub_class::sub_class(int type_1):constructor_test(type_1)
{
    cout << "call sub class constructor #1" << endl;
    p_instance = new int(type_1);
}

sub_class::sub_class(int type_2, bool tmp):constructor_test(type_2, tmp)
{
    cout << "call sub class constructor #2" << endl;
    p_instance = new int(type_2);
}

sub_class::sub_class(const sub_class& obj):constructor_test(obj)
{
    cout << "call sub class copy constructor" << endl;
    p_instance = new int(*(obj.p_instance));
}

sub_class & sub_class::operator =(const sub_class& obj){
    cout << "call = sub class" << endl;
    if(&obj != this){
        p_instance = new int(*(obj.p_instance));
    }

    return *this;
}

int main(){
    cout << "Base class show:--------" << endl;
    constructor_test ins_1(1);
    constructor_test ins_2(2, true);
    constructor_test ins_3 = ins_1;
    constructor_test ins_4(0);
    ins_4 = ins_1;
    constructor_test ins_5(ins_1);

    cout << "sub_class show:========" << endl;
    sub_class sub_1(1);
    sub_class sub_2(2, true);
    sub_class sub_3 = sub_1;
    sub_class sub_4(0);
    sub_4 = sub_1;
    sub_class sub_5(sub_1);

    return 0;
}