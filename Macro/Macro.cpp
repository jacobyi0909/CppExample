#include <iostream>

// 매크로

#define MAX 10
#define INT_A int a
#define ADD(a, b) (a + b)
#define TO_STRING(str) #str
#define STRCAT(str1, str2) str1 ## str2

//#define CHEAT_QA
#define CHEAT_CH 

int gold;



class A {
public:
    // 인라인은 컴파일과정에서 처리된다.
    inline int Add(int a, int b)
    {
        return a + b;
    }
};


int main()
{
    // 매크로는 전처리과정에서 처리된다.


    gold = 1000;

#ifdef CHEAT_QA
    gold = 100000;
#endif

#ifdef CHEAT_CH
    gold = 100000000;
#endif


    //std::cout << STRCAT("Hello ", "World!");
    //std::cout << "Hello World";

    std::cout << __LINE__ << std::endl;
    std::cout << __FUNCTION__ << std::endl;
}



