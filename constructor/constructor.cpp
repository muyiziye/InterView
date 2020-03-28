#include <iostream>
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
}

constructor_test & constructor_test::operator =(const constructor_test& obj){
    cout << "call = constructor" << endl;
    this->p_instance = new int(*(obj.p_instance));
}

int main(){

    constructor_test ins_1(1);
    constructor_test ins_2(2, true);
    constructor_test ins_3 = ins_1;
    constructor_test ins_4(0);
    ins_4 = ins_1;
    constructor_test ins_5(ins_1);


    return 0;
}