#include "TestA.h"
#include "TestB.h"

TestA::TestA()
{
	TestB bb;
	pB = &bb;
}
