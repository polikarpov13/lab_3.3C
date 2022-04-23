#include "pch.h"
#include "CppUnitTest.h"
#include "../../../../../політех/ооп/3/lab_3.3C/lab_3.3C/Object.cpp"
#include "../../../../../політех/ооп/3/lab_3.3C/lab_3.3C/LongLong.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			LongLong A(4, 4), B(4, 4);
			Assert::AreEqual(A == B, true);
		}
	};
}
