
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


int main()
{
    EPlayerState state = EPlayerState::Idle;

    switch (state)
    {
        case EPlayerState::Idle:
            break;
    }
    
    int i = 10;
    int k = 20;
    
    float result = MultiplyRef(i, k);
    std::cout << "i : " << i << std::endl;
}

