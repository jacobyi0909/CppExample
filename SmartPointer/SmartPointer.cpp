#include <iostream>
#include <memory>

class Test {
public:
	int value;
};

int main()
{
	std::shared_ptr<Test> test = std::make_shared<Test>();

	std::shared_ptr<Test> test2 = test;

	std::cout << test.use_count() << std::endl;

	std::cout << test->value << std::endl;

	std::weak_ptr<Test> wp = test;

	std::cout << wp.use_count() << std::endl;

	std::cout << wp.lock()->value << std::endl;


	std::unique_ptr<Test> up = std::make_unique<Test>();

	std::unique_ptr<Test> up2 = std::move(up);











	//std::shared_ptr<Test> t = std::make_shared<Test>();
	//
	//
	//
	//std::shared_ptr<Test> t(new Test());
	//std::shared_ptr<Test> t2(t);

	//t.swap(t2);

	//std::cout << t.use_count() << std::endl;
	//std::cout << t2.use_count() << std::endl;
	//std::cout << ((t == t2) ? "같다" : "다르다") << std::endl;
	//std::cout << t->value << std::endl;

	//// === unique_ptr
	//std::unique_ptr<Test> ut = std::make_unique<Test>();
	//ut->value = 10;

	////std::unique_ptr<Test> ut2 = ut;               // 실패
	////std::unique_ptr<Test> ut2 = std::move(ut);    // 성공

	//std::cout << ut;

	//// === weak_ptr
	//std::shared_ptr<Test> test = std::make_shared<Test>();
	//std::weak_ptr<Test> wp = t;

	//std::cout << test.use_count() << std::endl;
	//std::cout << wp.use_count() << std::endl;

	////std::cout << (*wp).value << std::endl;  // 실패
	//std::cout << wp.lock()->value << std::endl;  // 성공

	//test.reset();
	//std::cout << wp.expired() << std::endl;


}
