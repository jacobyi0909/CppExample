#include <iostream>

class Soldier
{
public:
    int age;

    // 기본 생성자

    Soldier();

    Soldier(int _age);

    void Print();
   
};

void Soldier::Print()
{
    std::cout << age << std::endl;
}

Soldier::Soldier()
{
    
}

Soldier::Soldier(int _age) : age(_age)
{
    
}



class SwordMan : public Soldier
{
public:
    SwordMan(int _age) : Soldier(_age)
    {
    }
};

int main()
{
    SwordMan s(10);
    s.Print();
}
