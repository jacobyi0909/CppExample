
#include <iostream>

class Number {
public:
    Number()
    {
        std::cout << "기본 생성자 호출됨" << std::endl;
    }

    Number(int value)
    {
        std::cout << "매개변수가 있는 기본 생성자 호출됨" << std::endl;
    }

    Number(const Number& n)
    {
        std::cout << "복사 생성자 호출됨" << std::endl;
    }

    Number(Number&& n) noexcept
    {
        std::cout << "이동 생성자 호출됨" << std::endl;
    }
};

int main()
{
    //int a(10);  // a = 10
    //int b(a);   // b = a

    int a = 10; // a : Lvalue, 10 : Rvalue
    int b = a;  // b : Lvalue, a : Lvalue


    Number n(10);   // 기본생성자 호출
    Number n2(n); // 복사생성자 호출
    Number n3(std::move(n)); // 
}
