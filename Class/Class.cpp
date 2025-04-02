#include <iostream>

class Soldier
{
public:
    int age;
    int gold;

    // 기본 생성자
    Soldier()
    {
    }

    Soldier(int _age) : age(_age)
    {
    }
    virtual void Print()
    {
        std::cout << "Soldier : " << age << std::endl;
    }
};

class SwordMan : public Soldier
{
public:
    SwordMan(int _age) : Soldier(_age)
    {
    }
    
    // 부모의 Print함수를 재정의 하고싶다.
    virtual void Print() override
    {
        std::cout << "SwordMan : " << age << std::endl;
    }
};

// 인터페이스
// -> 모든 맴버가 순수가상함수로 이루어진 클래스
class ISpeak
{
public:
    virtual void Cry() = 0;
    virtual void Shout() = 0;
};

// 추상클래스 (Abstract Class)
// -> 맴버 함수 중에 순수가상함수가 포함된 클래스 
// -> 객체를 만들지 못한다. 상속받은 클래스가 함수를 완성해서 객체를 만들 수 있다.
class Animal : public ISpeak
{
public:
    int age;
    void Print()
    {
        std::cout << "Abstractclass : " << age << std::endl;
    }
    virtual void Walk() = 0;    // 순수 가상 함수 pure virtual function
    virtual void Cry() override
    {
        std::cout << "Animal::Cry" << std::endl;
    }

    virtual void Shout() override
    {
        std::cout << "Animal:: Shout" << std::endl;
    }
};
class Cat : public Animal
{
public:
    virtual void Walk() override
    {
        std::cout << "Cat::Walk" << std::endl;
    }

};
int main()
{
    Cat cat;
    cat.Walk();
    // SwordMan* swordMan = new SwordMan(10);
    // swordMan->Print();
    //
    // Soldier* soldier = swordMan;    // 자식 객체를 부모 타입으로 캐스팅
    // soldier->Print();
    //
    // delete swordMan;
}
