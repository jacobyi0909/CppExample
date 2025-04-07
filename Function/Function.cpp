
#include <iostream>
#include "Add.h"

float Multiply(float a, float b)
{
    return a * b;
}

// 선언, 정의/구현, 실행
// Call By Pointer
int Multiply(int* a, int* b)
{
    *a = 100;
    return (*a) * (*b);
}
// Call By Value
int Multiply(int a, int b)
{
    a = 100;
    return a * b;
}
// Call By Reference
int MultiplyRef(int& a, int& b)
{
    a = 100;
    return a + b;
}

// 열거형
typedef unsigned char uint8;

enum class EPlayerState : uint8
{
    Idle,
    Move,
    Attack,
};
enum class EEnemyState
{
    Idle,
    Move,
    Attack,
};






int Test()
{
    static int a = 10;

    a += 10;

    return a;
}

class TestCalss
{
public:
    static int Add(int a, int b)
    {
        return a + b;
    }
    
    
    static int number;

};
int TestCalss::number;

int main()
{
    TestCalss tc1;
    TestCalss tc2;
    TestCalss tc3;

    tc1.number = 10;
    tc2.number = 100;
    tc3.number = 1000;

    std::cout << tc3.number << std::endl;


   /* TestCalss::Add(10, 20);

    Test();
    int result = Test();
    std::cout << result << std::endl;

*/








    //EPlayerState state = EPlayerState::Idle;

    //switch (state)
    //{
    //    case EPlayerState::Idle:
    //        break;
    //}
    //
    //int i = 10;
    //int k = 20;
    //
    //float result = MultiplyRef(i, k);
    //std::cout << "i : " << i << std::endl;
}

