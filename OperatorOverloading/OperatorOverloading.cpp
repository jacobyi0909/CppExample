#include <iostream>

class Number
{
public:
    int value;

    Number(int _value) : value(_value)
    {
    }
    void Print()
    {
        std::cout << value << std::endl;
    }

    Number& operator+(int v);
    friend Number operator+(int v, const Number& n);
};
Number& Number::operator+(int v)
{
    this->value = this->value + v;
    return *this;
}

Number operator+(int v, const Number& n)
{
    Number temp(n);
    temp.value = temp.value + v;
    return temp;
}


int main()
{
    Number num(10);

    Number num2(20);

    num = 1 + num2;

    //num = num.operator+(1, 2);
    //num = num + 1;

    num.Print();

    
}
