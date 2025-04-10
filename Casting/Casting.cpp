
#include <iostream>

class Animal {
public:
	virtual void Test() {}
};

class Cat : public Animal
{
	virtual void Test() override {}
};

union MyUnion
{
	int a;
	char b[4];
};

int main()
{
	// const cast

	int a = 10;
	int b = 100;
	
	const int* const pA = &a;

	//*pA = 20;
	//pA = &b;

	int* pA1 = const_cast<int*>(pA);

	*pA1 = 20;

	//MyUnion u;
	//u.a = 0x01020304;
	//for (int i = 0; i < 4; i++)
	//{
	//	std::cout << (int)u.b[i] << std::endl;
	//}

	//int a = 0x01020304;
	//char* c = reinterpret_cast<char*>(&a);
	//for (int i = 0; i < 4; i++)
	//{
	//	std::cout << static_cast<int>(*(c + i)) << std::endl;
	//}


	//Cat cat;
	//Cat* pCat = &cat;
	////Animal* pAni = pCat;			// 암시적
	// static_cast는 컴파일할 때 형변환이 가능한지 체크
	// 일반적으로 기본자료형을 캐스팅할 때 사용한다.
	//Animal* pAni = static_cast<Animal*>(pCat);	// 명시적

	// 기본자료형은 안된다.
	// 형변환의 성공/실패가 있다.
	// 클래스에 가상함수가 1개이상 존재해야한다.
	//Animal ani;	// 명시적
	//Cat* cat = dynamic_cast<Cat*>(&ani);

	//if (cat)
	//{
	//	std::cout << "캐스팅 성공" << std::endl;
	//}
	//else {
	//	std::cout << "캐스팅 실패" << std::endl;

	//}



	//// 형 변환
	//int a = 0;
	//float f = 3.14f;

	//a = static_cast<int>(f);

	//std::cout << a << std::endl;


	//// 숫자로만 이루어진 문자열 n_str이 주어질 때, n_str을 정수로 변환하여 return하도록 solution 함수를 완성해주세요.
	//
	//const char* n_str = "12345";
	//int returnValue = 0;
	//for (int i = 0; i < 5; i++)
	//{
	//	int c = *(n_str + i);
	//	c = c - '0';
	//	for (int j = 4; j > i ; j--)
	//	{
	//		c *= 10;
	//	}
	//	returnValue += c;
	//}
	//std::cout << returnValue << std::endl;


}
