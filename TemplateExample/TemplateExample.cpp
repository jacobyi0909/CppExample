
#include <iostream>

// 템플릿 : 주형, 틀
// 일반화 프로그래밍

// 함수 템플릿
template<typename T>
T Add(T a, T b)
{
	return a + b;
}

// 함수 템플릿 특수화
template<>
int Add(int a, int b)
{
	return a + b;
}

// 템플릿 클래스
template<typename T>
class Test {
public:
	T Add(T a, T b) {
		return a + b;
	}
};

// 템플릿 클래스 특수화
template<>
class Test<int> {
public:
	int Add(int a, int b) {
		return a + b;
	}
};

int main()
{
	Test<int> test;
	float result = test.Add(10.8f, 20.5f);
	std::cout << result;


	//float result = Add<int>(10.8f, 20.5f);
	//std::cout << result;
}
