
class constructor_test{
public:
    constructor_test(int type_1);
    constructor_test(int type_2, bool tmp);
    constructor_test(const constructor_test& obj);
    constructor_test &operator =(const constructor_test& obj);

private:
    int* p_instance;

};

class sub_class: public constructor_test{
public:
    sub_class(int type_1);
    sub_class(int type_2, bool tmp);
    sub_class(const sub_class& obj);
    sub_class &operator =(const sub_class& obj);

private:
    int* p_instance;
};