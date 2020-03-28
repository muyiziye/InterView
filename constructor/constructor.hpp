
class constructor_test{
public:
    constructor_test(int type_1);
    constructor_test(int type_2, bool tmp);
    constructor_test(const constructor_test& obj);
    constructor_test &operator =(const constructor_test& obj);

private:
    int* p_instance;

};